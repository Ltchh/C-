#include"WorkerManager.h"
/*����һ��������
	*���û��Ĺ�ͨ����
	*��ְ����ɾ��ĵĲ���
	*���ļ��Ķ�д����
*/

WorkerMager::WorkerMager()//Ա��������Ŀ�ʵ�� ���캯��
{
	
	ifstream ifs;

	//1.�ļ�������-> �ļ���������γ�ʼ��
	ifs.open(FILENAME, ios::in);//���ļ�
	if (!ifs.is_open())
	{
		cout << "<�ļ�������>" << endl;//�ļ������ڵĻ���Ա����Ϊ0
		this->m_mpenumber = 0;
		this->m_Emparray = NULL;//��ʼ������Ϊ��
		this->m_FileIsEmpty = true;//��ʼ���ļ��Ƿ�Ϊ��treu�Ǽ� false��
		ifs.close();//�ļ�������ֱ�ӹر�
		return;
	}

	//2.�ļ�����->�ļ�Ϊ��û�м�¼��γ�ʼ��
	char ch;
	ifs >> ch;
	if (ifs.eof()) //***�����ݺ���
	//		�ж��ļ������Ƿ�Ϊ�� ���ch��ȡ��һ���ַ�Ϊeof(�ļ���β)
	//ifs.eof()����falose��Ϊ�� �����û������,˵�����ļ�Ϊ��
	{
		cout << "<�ļ����ڵ�������>" << endl;//�ļ������ڵĻ���Ա����Ϊ0
		this->m_mpenumber = 0;
		this->m_Emparray = NULL;//��ʼ������Ϊ��
		this->m_FileIsEmpty = true;//��ʼ���ļ��Ƿ�Ϊ��treu�Ǽ� false��
		ifs.close();//�ļ�������ֱ�ӹر�
		return;
	}

	//3.�ļ�����->������->��γ�ʼ������
	int num = this->get_EmpNum(); //ְ��������
	cout << "ְ��������:" << num << endl;
	this->m_mpenumber = num;

	//�ȿ��ٿռ�
	this->m_Emparray = new Worker * [this->m_mpenumber];
	//���ļ��е����ݴ�ŵ�������
	this->init_Emp();


	////���Դ���
	//for (size_t i = 0; i < this->m_mpenumber; i++)
	//{
	//	cout << "ְ�����:" << this->m_Emparray[i]->m_id
	//		<< "\t����:" << this->m_Emparray[i]->m_name
	//		<< "\tְλ:" << this->m_Emparray[i]->m_number
	//		<< "\tְ��:" << this->m_Emparray[i]->m_duty << endl;
	//}
}

//ͳ���ļ������Ա����
int WorkerMager::get_EmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ� ��

	int id;//ְ���ı��
	string name;//ְ������
	string number;//���ű��
	string duty;//��λְ��

	int num=0;//��¼�ļ������Ա����

	while (ifs>>id&&ifs>>name&&ifs>>number&&ifs>>duty)
	{
		num++;
	}
	return num;
}

void WorkerMager::Show_Menu(){ //��Ա��������
	cout << "************************************" << endl;
	cout << "*****    ְ �� �� �� ϵ ͳ    ******" << endl;
	cout << "********** 1.����ְ����Ϣ **********" << endl;
	cout << "********** 2.��ʾְ����Ϣ **********" << endl;
	cout << "********** 3.ɾ��ְ����Ϣ **********" << endl;
	cout << "********** 4.�޸�ְ����Ϣ **********" << endl;
	cout << "********** 5.����ְ����Ϣ **********" << endl;
	cout << "********** 6.���ձ������ **********" << endl;
	cout << "********** 7.����ĵ���Ϣ **********" << endl;
	cout << "********** 0.�˳�������� **********" << endl;
	cout << "************************************" << endl;
	cout << endl;
}

void WorkerMager::ExitSysterm() //�˳�����
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);//�˳�����;
}

//�����Ա��Ϣ
void WorkerMager::Add_Emp() {
	cout << "�����������Ա������:"<<endl;
	int addNumn;
	cin >> addNumn;
	if (addNumn>0)
	{
		//���
		int newsize = this->m_mpenumber + addNumn;//�¿ռ����ԭ����

		//�����¿ռ�
		Worker** newSpace = new Worker * [newsize];
		if (this->m_Emparray!=NULL)
		{
			for (size_t i = 0; i < this->m_mpenumber; i++)//��ԭ����������ӽ��µĿռ�
			{
				newSpace[i] = this->m_Emparray[i];
			}
		}
		//����µ������������
		for (size_t i = 0; i < addNumn; i++)
		{
			int id;//ְ���ı��
			string name;//ְ������
			
			int	dselect;

			cout << "�������" << i + 1 << "����ְ�����:" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "��Ա��������:" << endl;
			cin >> name;

			cout << "��ѡ���ְ����λ:" << endl;
			cout << "1.Ա��" << endl;
			cout << "2.����" << endl;
			cout << "3.Boss" << endl;
			cin >> dselect;
			Worker* worker = NULL;
			switch (dselect)
			{
			case 1:
				worker = new Employee(id, name, "Ա��", "��ɾ�����������");
				break;
			case 2:worker = new Manager(id, name, "����", "���BOS����������,ָ������Ա��");
				break;
			case 3:worker = new Boss(id, name, "BOSS", "�������й�˾����");
				break;
			default:
				cout << "ѡ�����" << endl;
			}
			//��������Աְ��,���浽������
			newSpace[this->m_mpenumber + i] = worker;
		}
		//�ͷ�ԭ�еĿռ�
		delete[] this->m_Emparray; //�ͷ������д�� delete����[]

		//�����¿ռ��ָ��
		this->m_Emparray = newSpace;

		//������Ա����
		this->m_mpenumber = newsize;

		//������Ա��Ϊ�յı�־  ���һ��������ļ��Ͳ�Ϊ����
		this->m_FileIsEmpty = false;

		//������ӳɹ�
		cout << "�ɹ����" << addNumn << "������" << endl;

		//��������
		this->save();//�����ļ�����
	}
	else {
		cout << "�������" << endl;
	}

	//���������
	system("pause");
	system("cls");
}

void WorkerMager::save() {
	ofstream ofs; //�����ļ���
	ofs.open(FILENAME, ios::out);//���ļ�(�ļ�·��,�򿪷�ʽ out����ķ�ʽ�൱��д�ķ�ʽ)
	for (size_t i = 0; i < this->m_mpenumber; i++)
	{
		ofs << this->m_Emparray[i]->m_id<<" "
			<< this->m_Emparray[i]->m_name<<" "
			<< this->m_Emparray[i]->m_number<<" "
			<< this->m_Emparray[i]->m_duty << endl;
	}
	ofs.close();//�ر��ļ�
}
//��ʼ��Ա��
void WorkerMager::init_Emp() {
	ifstream ifs;//�����ļ���
	ifs.open(FILENAME, ios::in);//�ļ�����filename�ļ����Զ�(����)�ķ�ʽ

	int id;//ְ���ı��
	string name;//ְ������
	string number;//���ű��
	string duty;//��λְ��

	int index = 0;//��¼��ȡ��������
	while (ifs>>id&&ifs>>name&&ifs>>number&&ifs>>duty)
	{
		Worker* worker = NULL;
		if (number.compare("Ա��") == 0) { 
			/*
			���Ҫ�ȽϵĶ���������string�������ú��� compare()
				��Ҫ�Ƚ�string s1��s2��дΪ��s1.compare(s2)��������ֵΪ0����������ȡ�
				��s1 < s2ʱ������Ϊ����(-1)��
				��s1 == s2ʱ������ֵ= 0��
				��s1 > s2ʱ����������(1)
			*/
			worker = new Employee(id,name,number,duty);
		}
		else if (number.compare("����") == 0) {
			worker = new Manager(id, name, number, duty);
		}
		else
		{
			worker = new Boss(id, name, number, duty);
		}
		this->m_Emparray[index] = worker;
		index++;
	}
	//�ر��ļ�
	ifs.close();
}

void WorkerMager::show_Emp() {//��ʾ��Ա��Ϣ
	/*
	��ʾ֮ǰ�ǲ�����Ҫ�ж�һ�����ļ�˽��Ϊ��\
	*/
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ����ļ�" << endl;
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

void WorkerMager:: delete_Emp() {//ɾ��Ա��

	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�������" << endl;
	}
	else {
		cout << "������Ҫɾ����ְ�����:" << endl;
		int num_id;
		cin >> num_id;
		int index = this->lookup_Emp(num_id);
		if (index > -1)
		{
			for (size_t i = num_id; i < this->m_mpenumber - 1; i++)
			{
				this->m_Emparray[i] = this->m_Emparray[i + 1];
			}
			this->m_mpenumber--;//���������е�����
			this->save();
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ���ı�Ų�����" << endl;
		}
	}
	
}

int WorkerMager::lookup_Emp(int id) {//����Ա����� �ҵ�����id �Ҳ�������-1
	for (size_t i = 0; i < this->m_mpenumber; i++)
	{
		if (this->m_Emparray[i]->m_id==id)
		{
			return i;
		}
	}
	return -1;

}

void WorkerMager::Mod_Emp() {//�޸�Ա����Ϣ
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ���Ϊ��" << endl;
	}

	int id;
	cout << "�����޸�Ա���ı��:"  << endl;
	cin >> id;
	int ret = this->lookup_Emp(id);

	if (ret == -1) {
		cout << "�ñ��Ա��������" << endl;
	}
	else
	{
		//�ҵ���Ա������Ϣ
		delete this->m_Emparray[ret];
		int id=0;//ְ���ı��
		string name;//ְ������
		string number;//���ű��
		string duty;//��λְ��
		cout << "�Ѿ��ҵ�" << id << "�ŵ�ְ��\n" << endl;
		cout << "�����������ְ���ı��:" << endl;
		cin >> id;
		cout << "�����������Ա��������:" << endl;
		cin >> name;
		cout << "�������Ա���ĸ�λ" << endl;
		cin >> number;
		cout << "�����Ա��������:" << endl;
		cin >> duty;

		Worker* worker = NULL;
		int num_new;
		do
		{
			cout << "��ѡ���λ:" << endl;
			cout << "1.Ա��" << endl;
			cout << "2.����" << endl;
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
				cout << "�������,��дѡ��:" << endl;
				break;
			}

		} while (num_new>=3&&num_new<=0);

		//��������
		this->m_Emparray[ret] = worker;
		this->save();
	}
}

void WorkerMager::Look_Emp() {//����Ա����Ϣ
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ����ļ�Ϊ��" << endl;
		return;
	}

	cout << "1.��Ų�ѯԱ����Ϣ" << endl;
	cout << "2.������ѯԱ����Ϣ" << endl;
	cout << "����:" << endl;
	int num=0;
	bool flag = false;
	
		cin >> num;
		if (num == 1)//��Ų���
		{
			int number = 0;
			cout << "�����ѯ�ı��:";
			cin >> number;
			number = this->lookup_Emp(number);
			if (number != -1)
			{
				this->m_Emparray[number]->showInfo();
			}
			else
				cout << "���޴���";
		}
		else if (num == 2)//��������
		{
			string name;
			cout << "�����ѯ������:" << endl;
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
				cout << "���޴���" << endl;
			}
		}

	
		system("pause");
		system("cls");
}

WorkerMager::~WorkerMager()//Ա��������Ŀ�ʵ�� ��������
{
	if (this->m_Emparray!=NULL)//���������ֶ����� �ֶ��ͷ�***�ص����
	{
		delete[] this->m_Emparray;
		this->m_Emparray = NULL;
	}
}