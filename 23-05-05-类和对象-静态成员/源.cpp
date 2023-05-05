#include<iostream>
#include<string>

/*
	*类和对象-静态成员 
		*	 静态成员变量
				* 所有对象共享同一份数据
				* 在编译阶段分配内存
				* 类声明-类外初始化
		*	 静态成员函数
				* 所有对象共享同一个函数
				* 静态成员函数只能访问静态成员变量 
*/

using namespace std;


//静态成员变量

class MyClass
{
public:	//公共权限
	MyClass();//构造函数

	static void func() {//静态成员函数  ->静态成员函数也是有访问权限的`

		M_a = 130;//静态成员函数可以访问 静态成员变量
		cout << "静态成员函数调用" << endl;

		
		//M_c = 160;//静态成员函数不可以访问非静态变量成员 ; 无法区分到底是那个对象的M_c
	}

	~MyClass();//析构函数
	
	/*
	* 1.所有对象共享同一份数据
	* 2.编译阶段分配内存
	* 3.类内声明,类外初始化操作
	*/
	static int M_a;// 静态成员变量  //类内声明 -->3

	int M_c;
private://私有权限

	
	static int M_b;//静态成员变量	//静态成员变量也是有访问权限的

};


int MyClass::M_a = 100;//内外初始化 -->3

int MyClass::M_b = 150;//内外访问不到私有的静态成员

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void test01() {//类内声明,类外初始化操作
	MyClass p1;

	cout << "p1=" << p1.M_a << endl;

	p1.M_a = 200;

	cout << "p1=" << p1.M_a << endl;

}

void test02() {

	/*
	* 静态成员变量 不属于某个对象上,所有对象都贡享同一份数据因此静态成员变量有两种访问方式
	*	1.通过对象进行访问
	* 
	*	2.通过类名进行访问 
	*/
		
	//1.通过类对象进行访问
	MyClass p2;

	cout << "p2=" << p2.M_a << endl;

	//2.通过类名进行访问
	cout <<"MyClass::M_a=" << MyClass::M_a << endl;

}


void test03() {

/*
		静态成员函数
			*所有对象共享同一个函数
			*静态成员函数只能访问静态成员变量
			* 
		1.通过对象进行访问

		2.通过类名进行访问
*/
	MyClass p3;


	//通过对象进行访问
	p3.func();

	//通过类名进行访问
	MyClass::func();
}

int main() {

	//类内声明, 类外初始化操作
	//test01();
	
	//test02();

	test03();

	system("pause");
	return 0;
}