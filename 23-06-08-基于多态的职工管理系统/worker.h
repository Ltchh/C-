#pragma once		//防止头文件的重复包含
#include<iostream>	//包含输入输出的流 头文件
#include<fstream>	//文件操作读写头文件
#include<string>	//字符串头文件

using namespace std;	//使用标准命名空间

//职工抽象类	如果有纯虚函数 这个类就是抽象类
class Worker
{
public:
//行为:
	//显示个人信息
	virtual void showInfo() = 0;//纯虚函数

	//获取岗位名称
	virtual string getDeptName() = 0;//纯虚函数


//属性:
	//职工的编号
	int m_id;

	//职工姓名
	string m_name;

	//部门编号
	int m_number;

	//岗位职责
	string m_duty;

private:

};
