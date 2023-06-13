#include"WorkerManager.h"

#include"employee.h"
#include"manager.h"
#include"boss.h"

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
	////测试
	//Worker* worker = NULL;
	//worker = new Employee(1, "玩吧", 1,"完成经理交代的任务");//多态  ->父类的指针或引用执行子类的对象
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "老王", 2, "完成老板交代的任务,给下面员工传达");
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "孙BOSS", 3, "管理公司的所有事务");
	//worker->showInfo();
	//delete worker;

	//实例化一管理者对象
	WorkerMager wm;

	int num;
	while (true)
	{
		//case语句过长需要加上->{}
		//调用管理菜单的成员函数
		wm.Show_Menu();
		cout << "请选择:";
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
			cout << "输入错误!" << endl;
			system("cls");//清屏
			break;
		}
	}

	system("pause");
	return 0;
}