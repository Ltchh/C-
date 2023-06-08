#include"WorkerManager.h"
#include"employee.h"

/*创建一个管理类
	*与用户的沟通界面
	*对职工增删查改的操作
	*与文件的读写交互
*/
enum MyEnum//枚举
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
	//测试
	
	Worker* worker = NULL;
	worker = new Employee(1, "玩吧", 1,"完成经理交代的任务");
	//多态  ->父类的指针或引用执行子类的对象

	worker->showInfo();

	////实例化一管理者对象
	//WorkerMager wm;

	//int num;
	//while (true)
	//{
	//	//调用管理菜单的成员函数
	//	wm.Show_Menu();
	//	cout << "请选择:";
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
	//		cout << "输入错误!" << endl;
	//		system("cls");//清屏
	//		break;
	//	}
	//}

	system("pause");
	return 0;
}