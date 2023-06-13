#pragma once		//防止头文件的重复包含
#include<iostream>	//包含输入输出的流 头文件
#include<fstream>	//文件操作读写头文件
#include<string>	//字符串头文件

#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#define FILENAME "empfile.txt"//宏常量

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

	//保存文件
	void save();

	//判断文件是否为空
	bool m_FileIsEmpty;



public:
	void Add_Emp();//添加人员信息
	
	int get_EmpNum();//统计文件中的人数

	void init_Emp();//初始化员工

	void show_Emp();//显示人员信息

	void delete_Emp();//删除员工

	int lookup_Emp(int id);//查找员工编号 找到返回id 找不到返回-1

	void Mod_Emp();//修改员工信息

	void Look_Emp();//查找员工信息

private:			//私有权限

};


