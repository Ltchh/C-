#include<iostream>
#include<string>

using namespace std;
/*

		*构造函数调用规则
				* 默认构造函数(无参,函数体为空)
				* 默认析构函数(无参,函数体为空)
				* 默认拷贝函数(函数.对属性进行值拷贝)
*/

/*      *构造函数调用规则如下:
				*C++不在提供默认无参构造,但会提供默认拷贝构造
				* 如果用户定义拷贝构造函数,C++就不会在提供奇特构造函数

*/

/*
	*一.创建一个类,c++编译器会给每一个类都添加至少3个函数

		1.默认构造函数	(空实现)
		2.析构函数		(空实现)
		3.拷贝构造函数	(值拷贝)

	*二.如果写了有参构造函数,编译器就不在提供默认构造函数,依然提供以恶搞拷贝构造函数
		如果写了拷贝构造函数,编译器就不在提供别的构造函数;
	*/


class MyClass{
public://公共权限
	MyClass();//默认构造函数

	MyClass(int age);//有参构造函数

	MyClass(const MyClass& p);//拷贝构造函数(值拷贝)  *****注意*****

	~MyClass();//析构函数;

	int M_age;

private://私有权限

};

MyClass::MyClass()
{
	cout << "默认构造函数" << endl;
}

MyClass::MyClass(int age) {
	M_age = age;
	cout << "有参构造函数" << endl;
}


MyClass::MyClass(const MyClass& p) {

	M_age = p.M_age;
	cout << "拷贝构造函数" << endl;
}

MyClass::~MyClass()
{

	cout << "析构函数调用" << endl;
}



void test01() {
	MyClass P1;
	P1.M_age = 18;

	MyClass P2(P1);

	cout << "P2的值" << P2.M_age << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}