#pragma once		//防止头文件的重复包含
#include<iostream>	//包含输入输出的流 头文件
#include<fstream>	//文件操作读写头文件
#include<string>	//字符串头文件

#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"


using namespace std;	//使用标准命名空间

class WorkerMager	//基于多态的管理系统的类
{
public:				//公共权限
	WorkerMager();	//构造函数
//行为
	void Show_Menu();//成员函数

	void ExitSysterm();//成员函数


	~WorkerMager();	//析构函数

public:
	int m_mpenumber;//记录人员数量

	//职工数组指针
	Worker** m_Emparray;

public:
	void Add_Emp();//添加人员信息

private:			//私有权限

};


