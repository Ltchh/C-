#include"WorkerManager.h"
/*创建一个管理类
	*与用户的沟通界面
	*对职工增删查改的操作
	*与文件的读写交互
*/

WorkerMager::WorkerMager()//员工管理类的空实现 构造函数
{
	
	ifstream ifs;

	//1.文件不存在-> 文件不存在如何初始化
	ifs.open(FILENAME, ios::in);//读文件
	if (!ifs.is_open())
	{
		cout << "<文件不存在>" << endl;//文件不存在的话人员人数为0
		this->m_mpenumber = 0;
		this->m_Emparray = NULL;//初始化数组为空
		this->m_FileIsEmpty = true;//初始化文件是否为空treu是假 false真
		ifs.close();//文件不存在直接关闭
		return;
	}

	//2.文件存在->文件为空没有记录如何初始化
	char ch;
	ifs >> ch;
	if (ifs.eof()) //***新内容函数
	//		判断文件存在是否为空 如果ch读取第一个字符为eof(文件结尾)
	//ifs.eof()返回falose是为真 真代表没有数据,说明这文件为空
	{
		cout << "<文件存在但无数据>" << endl;//文件不存在的话人员人数为0
		this->m_mpenumber = 0;
		this->m_Emparray = NULL;//初始化数组为空
		this->m_FileIsEmpty = true;//初始化文件是否为空treu是假 false真
		ifs.close();//文件不存在直接关闭
		return;
	}

	//3.文件存在->有数据->如何初始化数据
	int num = this->get_EmpNum(); //职工的人数
	cout << "职工的人数:" << num << endl;
	this->m_mpenumber = num;

	//先开辟空间
	this->m_Emparray = new Worker * [this->m_mpenumber];
	//将文件中的数据存放到数组中
	this->init_Emp();


	////测试代码
	//for (size_t i = 0; i < this->m_mpenumber; i++)
	//{
	//	cout << "职工编号:" << this->m_Emparray[i]->m_id
	//		<< "\t姓名:" << this->m_Emparray[i]->m_name
	//		<< "\t职位:" << this->m_Emparray[i]->m_number
	//		<< "\t职责:" << this->m_Emparray[i]->m_duty << endl;
	//}
}

//统计文件里的人员数量
int WorkerMager::get_EmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//打开文件 读

	int id;//职工的编号
	string name;//职工姓名
	string number;//部门编号
	string duty;//岗位职责

	int num=0;//记录文件里的人员数量

	while (ifs>>id&&ifs>>name&&ifs>>number&&ifs>>duty)
	{
		num++;
	}
	return num;
}

void WorkerMager::Show_Menu(){ //成员函数函数
	cout << "************************************" << endl;
	cout << "*****    职 工 管 理 系 统    ******" << endl;
	cout << "********** 1.增加职工信息 **********" << endl;
	cout << "********** 2.显示职工信息 **********" << endl;
	cout << "********** 3.删除职工信息 **********" << endl;
	cout << "********** 4.修改职工信息 **********" << endl;
	cout << "********** 5.查找职工信息 **********" << endl;
	cout << "********** 6.按照编号排序 **********" << endl;
	cout << "********** 7.清空文档信息 **********" << endl;
	cout << "********** 0.退出管理程序 **********" << endl;
	cout << "************************************" << endl;
	cout << endl;
}

void WorkerMager::ExitSysterm() //退出程序
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);//退出函数;
}

//添加人员信息
void WorkerMager::Add_Emp() {
	cout << "请输入添加人员的数量:"<<endl;
	int addNumn;
	cin >> addNumn;
	if (addNumn>0)
	{
		//添加
		int newsize = this->m_mpenumber + addNumn;//新空间加上原来的

		//开辟新空间
		Worker** newSpace = new Worker * [newsize];
		if (this->m_Emparray!=NULL)
		{
			for (size_t i = 0; i < this->m_mpenumber; i++)//把原来的数据添加进新的空间
			{
				newSpace[i] = this->m_Emparray[i];
			}
		}
		//添加新的数据批量添加
		for (size_t i = 0; i < addNumn; i++)
		{
			int id;//职工的编号
			string name;//职工姓名
			
			int	dselect;

			cout << "请输入第" << i + 1 << "个新职工编号:" << endl;
			cin >> id;

			cout << "请输入第" << i + 1 << "个员工的姓名:" << endl;
			cin >> name;

			cout << "请选择该职工岗位:" << endl;
			cout << "1.员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.Boss" << endl;
			cin >> dselect;
			Worker* worker = NULL;
			switch (dselect)
			{
			case 1:
				worker = new Employee(id, name, "员工", "完成经理交代的任务");
				break;
			case 2:worker = new Manager(id, name, "经理", "完成BOS交代的任务,指导下面员工");
				break;
			case 3:worker = new Boss(id, name, "BOSS", "管理所有公司事务");
				break;
			default:
				cout << "选择错误" << endl;
			}
			//将创建人员职责,保存到数组中
			newSpace[this->m_mpenumber + i] = worker;
		}
		//释放原有的空间
		delete[] this->m_Emparray; //释放数组的写法 delete加上[]

		//更改新空间的指向
		this->m_Emparray = newSpace;

		//更新人员数量
		this->m_mpenumber = newsize;

		//更新人员不为空的标志  添加一个人这个文件就不为空了
		this->m_FileIsEmpty = false;

		//提升添加成功
		cout << "成功添加" << addNumn << "名新人" << endl;

		//保存数据
		this->save();//调用文件保存
	}
	else {
		cout << "输入错误" << endl;
	}

	//任意件清屏
	system("pause");
	system("cls");
}

void WorkerMager::save() {
	ofstream ofs; //创建文件流
	ofs.open(FILENAME, ios::out);//打开文件(文件路径,打开方式 out输出的方式相当于写的方式)
	for (size_t i = 0; i < this->m_mpenumber; i++)
	{
		ofs << this->m_Emparray[i]->m_id<<" "
			<< this->m_Emparray[i]->m_name<<" "
			<< this->m_Emparray[i]->m_number<<" "
			<< this->m_Emparray[i]->m_duty << endl;
	}
	ofs.close();//关闭文件
}
//初始化员工
void WorkerMager::init_Emp() {
	ifstream ifs;//创建文件流
	ifs.open(FILENAME, ios::in);//文件流打开filename文件的以读(输入)的方式

	int id;//职工的编号
	string name;//职工姓名
	string number;//部门编号
	string duty;//岗位职责

	int index = 0;//记录读取到多少人
	while (ifs>>id&&ifs>>name&&ifs>>number&&ifs>>duty)
	{
		Worker* worker = NULL;
		if (number.compare("员工") == 0) { 
			/*
			如果要比较的对象是两个string，则利用函数 compare()
				若要比较string s1和s2则写为：s1.compare(s2)，若返回值为0，则两者相等。
				当s1 < s2时，返回为负数(-1)；
				当s1 == s2时，返回值= 0；
				当s1 > s2时，返回正数(1)
			*/
			worker = new Employee(id,name,number,duty);
		}
		else if (number.compare("经理") == 0) {
			worker = new Manager(id, name, number, duty);
		}
		else
		{
			worker = new Boss(id, name, number, duty);
		}
		this->m_Emparray[index] = worker;
		index++;
	}
	//关闭文件
	ifs.close();
}

void WorkerMager::show_Emp() {//显示人员信息
	/*
	显示之前是不是需要判断一下这文件私有为空\
	*/
	if (this->m_FileIsEmpty)
	{
		cout << "文件为空或无文件" << endl;
		return;
	}
	else
	{
		for (size_t i = 0; i <this->m_mpenumber; i++)
		{
			this->m_Emparray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

void WorkerMager:: delete_Emp() {//删除员工

	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在" << endl;
	}
	else {
		cout << "输入里要删除的职工编号:" << endl;
		int num_id;
		cin >> num_id;
		int index = this->lookup_Emp(num_id);
		if (index > -1)
		{
			for (size_t i = num_id; i < this->m_mpenumber - 1; i++)
			{
				this->m_Emparray[i] = this->m_Emparray[i + 1];
			}
			this->m_mpenumber--;//更新数组中的人数
			this->save();
			cout << "删除成功" << endl;
		}
		else
		{
			cout << "删除的编号不存在" << endl;
		}
	}
	
}

int WorkerMager::lookup_Emp(int id) {//查找员工编号 找到返回id 找不到返回-1
	for (size_t i = 0; i < this->m_mpenumber; i++)
	{
		if (this->m_Emparray[i]->m_id==id)
		{
			return i;
		}
	}
	return -1;

}

void WorkerMager::Mod_Emp() {//修改员工信息
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者为空" << endl;
	}

	int id;
	cout << "输入修该员工的编号:"  << endl;
	cin >> id;
	int ret = this->lookup_Emp(id);

	if (ret == -1) {
		cout << "该编号员工不存在" << endl;
	}
	else
	{
		//找到该员工的信息
		delete this->m_Emparray[ret];
		int id=0;//职工的编号
		string name;//职工姓名
		string number;//部门编号
		string duty;//岗位职责
		cout << "已经找到" << id << "号的职工\n" << endl;
		cout << "请重新输入该职工的编号:" << endl;
		cin >> id;
		cout << "请重新输入该员工的姓名:" << endl;
		cin >> name;
		cout << "请输入该员工的岗位" << endl;
		cin >> number;
		cout << "输入该员工的责任:" << endl;
		cin >> duty;

		Worker* worker = NULL;
		int num_new;
		do
		{
			cout << "请选择岗位:" << endl;
			cout << "1.员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.Boss" << endl;
			cin >> num_new;
			switch (num_new)
			{
			case 1: worker = new Employee(id, name, number, duty);
				break;
			case 2:worker = new Manager(id, name, number, duty);
				break;
			case 3:worker = new Boss(id, name, number, duty);
				break;
			default:
				cout << "输入错误,重写选择:" << endl;
				break;
			}

		} while (num_new>=3&&num_new<=0);

		//更新数据
		this->m_Emparray[ret] = worker;
		this->save();
	}
}

void WorkerMager::Look_Emp() {//查找员工信息
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者文件为空" << endl;
		return;
	}

	cout << "1.编号查询员工信息" << endl;
	cout << "2.姓名查询员工信息" << endl;
	cout << "输入:" << endl;
	int num=0;
	bool flag = false;
	
		cin >> num;
		if (num == 1)//编号查找
		{
			int number = 0;
			cout << "输入查询的编号:";
			cin >> number;
			number = this->lookup_Emp(number);
			if (number != -1)
			{
				this->m_Emparray[number]->showInfo();
			}
			else
				cout << "查无此人";
		}
		else if (num == 2)//姓名查找
		{
			string name;
			cout << "输入查询的姓名:" << endl;
			cin >> name;
			for (size_t i = 0; i < this->m_mpenumber; i++)
			{
				if (this->m_Emparray[i]->m_name.compare(name) == 0)
					//this->m_Emparray[i]->m_name==name
				{
					this->m_Emparray[i]->showInfo();
					flag = true;
				}
			}
			if (!flag)
			{
				cout << "查无此人" << endl;
			}
		}

	
		system("pause");
		system("cls");
}

WorkerMager::~WorkerMager()//员工管理类的空实现 析构函数
{
	if (this->m_Emparray!=NULL)//堆区数据手动开辟 手动释放***重点记忆
	{
		delete[] this->m_Emparray;
		this->m_Emparray = NULL;
	}
}