#include"WorkerManager.h"
/*创建一个管理类
	*与用户的沟通界面
	*对职工增删查改的操作
	*与文件的读写交互
*/

WorkerMager::WorkerMager()//员工管理类的空实现 构造函数
{
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

WorkerMager::~WorkerMager()//员工管理类的空实现 析构函数
{
}