#include"WorkerManager.h"

#include"employee.h"
#include"manager.h"
#include"boss.h"

/*����һ��������
	*���û��Ĺ�ͨ����
	*��ְ����ɾ��ĵĲ���
	*���ļ��Ķ�д����
*/
enum MyEnum//ö��
{
	EXIT,
	ADD,
	SHOW,
	DELETE,
	EDIT,
	LOOK_UP,
	SORT,
	CLEAR
};

int main() {
	////����
	//Worker* worker = NULL;
	//worker = new Employee(1, "���", 1,"��ɾ�����������");//��̬  ->�����ָ�������ִ������Ķ���
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "����", 2, "����ϰ彻��������,������Ա������");
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "��BOSS", 3, "����˾����������");
	//worker->showInfo();
	//delete worker;

	//ʵ����һ�����߶���
	WorkerMager wm;

	int num;
	while (true)
	{
		//case��������Ҫ����->{}
		//���ù���˵��ĳ�Ա����
		wm.Show_Menu();
		cout << "��ѡ��:";
		cin >> num;
		switch (num)
		{
		case ADD:	wm.Add_Emp();
			break;

		case SHOW: wm.show_Emp();
			break;

		case DELETE:wm.delete_Emp();
			break;

		case EDIT:wm.Mod_Emp();
			break;

		case LOOK_UP:wm.Look_Emp();
			break;

		case SORT:
			break;

		case CLEAR:
			break;

		case EXIT: wm.ExitSysterm();
			break;

		default:
			cout << "�������!" << endl;
			system("cls");//����
			break;
		}
	}

	system("pause");
	return 0;
}