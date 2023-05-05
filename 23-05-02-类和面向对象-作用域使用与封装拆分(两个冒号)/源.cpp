#include"标头.h"

MyClass::MyClass()			// ::-> MyClass的作用域
{	
	cout << "无参构造函数" << endl;
}

MyClass::MyClass(int a) :M_a(a) {	//有参构造函数

	//M_a = a;  == :M_a(a)
}

MyClass::MyClass(MyClass& p){//拷贝构造函数*** 如果自己不写拷贝构造函数编译器会帮你写,但是只能值拷贝 
									//-对于深度拷贝(堆区数据)会出现问题
	M_b = p.M_a;
}

MyClass::~MyClass()			//析构函数
{

}

