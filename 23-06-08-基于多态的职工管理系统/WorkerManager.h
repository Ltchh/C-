#pragma once		//防止头文件的重复包含
#include<iostream>	//包含输入输出的流 头文件
#include<fstream>	//文件操作读写头文件
#include<string>	//字符串头文件

using namespace std;	//使用标准命名空间

class WorkerMager	//基于多态的管理系统的类
{
public:				//公共权限
	WorkerMager();	//构造函数

	void Show_Menu();//成员函数

	void ExitSysterm();//成员函数

	~WorkerMager();	//析构函数

private:			//私有权限

};


