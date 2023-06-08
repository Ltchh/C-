#pragma once		//防止头文件的重复包含
#include"worker.h"



//普通员工类

class Employee:public Worker
{
public:

	Employee(int id, string name, int number,string duty);//构造函数
	//行为:
	//显示个人信息
	virtual void showInfo();//纯虚函数

	//获取岗位名称
	virtual string getDeptName();//纯虚函数


private:

};


