#pragma once		//防止头文件的重复包含
#include"worker.h"

//经理类

class Manager :public Worker
{
public:

	Manager(int id, string name, string number, string duty);//构造函数
	//行为:
	//显示个人信息
	virtual void showInfo();//纯虚函数

	//获取岗位名称
	virtual string getDeptName();//纯虚函数


private:

};
