#include"WorkerManager.h"
#include"employee.h"

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
	//����
	
	Worker* worker = NULL;
	worker = new Employee(1, "���", 1,"��ɾ�����������");
	//��̬  ->�����ָ�������ִ������Ķ���

	worker->showInfo();

	////ʵ����һ�����߶���
	//WorkerMager wm;

	//int num;
	//while (true)
	//{
	//	//���ù���˵��ĳ�Ա����
	//	wm.Show_Menu();
	//	cout << "��ѡ��:";
	//	cin >> num;
	//	switch (num)
	//	{
	//	case ADD:
	//		break;

	//	case SHOW:
	//		break;

	//	case DELETE:
	//		break;

	//	case EDIT:
	//		break;

	//	case LOOK_UP:
	//		break;

	//	case SORT:
	//		break;

	//	case CLEAR:
	//		break;

	//	case EXIT: wm.ExitSysterm();
	//		break;

	//	default:
	//		cout << "�������!" << endl;
	//		system("cls");//����
	//		break;
	//	}
	//}

	system("pause");
	return 0;
}