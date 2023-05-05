#pragma once //防止多重包涵头文件

#include<iostream>
#include<string>

using namespace std; 

class MyClass
{
public:				//公共权限
	MyClass();		//无参构造函数

	MyClass(int a);	//有参构造函数

	MyClass(MyClass& p);//拷贝构造函数

	~MyClass();			//析构函数

	int M_b;
private:			//私有权限
	int M_a;

};

