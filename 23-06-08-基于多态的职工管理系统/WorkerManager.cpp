#include"WorkerManager.h"
/*����һ��������
	*���û��Ĺ�ͨ����
	*��ְ����ɾ��ĵĲ���
	*���ļ��Ķ�д����
*/

WorkerMager::WorkerMager()//Ա��������Ŀ�ʵ�� ���캯��
{
	this->m_mpenumber = 0;
	this->m_Emparray = NULL;
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
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.Boss" << endl;
			cin >> dselect;
			Worker* worker = NULL;
			switch (dselect)
			{
			case 1:
				worker = new Employee(id, name, "��ְͨ��", "��ɾ�����������");
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

		//������ӳɹ�
		cout << "�ɹ����" << addNumn << "������" << endl;
	}
	else {
		cout << "�������" << endl;
	}

	//���������
	system("pause");
	system("cls");
}

WorkerMager::~WorkerMager()//Ա��������Ŀ�ʵ�� ��������
{
}