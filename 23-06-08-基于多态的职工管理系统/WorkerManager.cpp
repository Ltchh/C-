#include"WorkerManager.h"
/*创建一个管理类
	*与用户的沟通界面
	*对职工增删查改的操作
	*与文件的读写交互
*/

WorkerMager::WorkerMager()//员工管理类的空实现 构造函数
{
	this->m_mpenumber = 0;
	this->m_Emparray = NULL;
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
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.Boss" << endl;
			cin >> dselect;
			Worker* worker = NULL;
			switch (dselect)
			{
			case 1:
				worker = new Employee(id, name, "普通职工", "完成经理交代的任务");
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

		//提升添加成功
		cout << "成功添加" << addNumn << "名新人" << endl;
	}
	else {
		cout << "输入错误" << endl;
	}

	//任意件清屏
	system("pause");
	system("cls");
}

WorkerMager::~WorkerMager()//员工管理类的空实现 析构函数
{
}