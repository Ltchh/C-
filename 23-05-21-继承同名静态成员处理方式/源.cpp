#include<iostream>
#include<string>

using namespace std;

/*静态的成员变量
* static静态关键字
*   静态成员变量特点:
*		1.共享同一份数据
		2.编译阶段就分配内存
*		3.类内声明 内外初始化
*	静态成员函数特点:
*		1.只能访问静态的成员变量;不能访问非静态的成员变量
*		2.共享同一份实例
*/

/* 继承同名静态成员处理方式
	* 访问子类同名成员 直接访问即可
	* 访问父类同名成员 需要加上作用域
	*
*/

//继承中同名静态成员处理方式
class base { //父类(基类)
public:

	static int m_a;//静态成员变量 类内声明-> "1"

	static void func() {
		cout << "base下的静态成员函数" << endl;
	}

	static void func(int a) {//重载版本
		cout << "base 下 static void func(int a)的静态成员函数" << endl;
	}
};

int base::m_a = 100;//静态成员变量  内外初始化"1"<-

class son :public base {
public:
	static int m_a; //静态成员变量 类内声明->"2" 
	static void func() {
		cout << "son下的静态成员函数" << endl;
	}
	static void func(int a) {//重载版本
		cout << "son下 static void func(int a)的静态成员函数" << endl;
	}
};

int son::m_a = 200; //静态成员变量  内外初始化"2"<-
//继承中同名静态成员函数处理方式

void test01() {//同名静态成员变量访问方式

	//1.通过对象访问静态成员变量
	son p1;

	cout << "通过对象访问静态成员变量" << endl;
	cout << "(子类)son 下 m_a=" << p1.m_a << endl;//子内静态成员变量直接访问
	cout << "(父类)base 下 m_a=" << p1.base::m_a << endl;//父类静态成员变量访问需要加上作用域

	//2.通过类名访问静态成员变量
	cout << "(子类)son 下 m_a=" <<son::m_a << endl;
	//::是通过类名直接访问父类的静态成员变量

	cout << "(父类)base 下 m_a=" <<base::m_a << endl;
	//::是通过类名直接访问父类的静态成员变量

	cout << "(父类)base 下 m_a=" <<son::base::m_a << endl;
	//第一个:: 代表通过类名方式访问 第二个::代表访问父类(基类)作用域下
	//son类下的base的作用域下的m_a
}


void test02() {
	//1.通过对象访问静态成员函数
	son p2;
	p2.func();//子类静态成员函数 直接访问
	p2.base::func();//父类静态成员函数 需要加上作用域

	//2.通过类名访问静态成员函数
	son::func();//类名直接访问静态成员函数
	base::func();//类名直接访问静态成员函数
	son::base::func();//子类名访问作用域下的父类的静态成员函数
	
	//子类出现和父类同名的静态成员函数;也会隐藏父类中所有同名成员函数
	//如果想访问父类中被隐藏同名成员函数 需要加上作用域
	son::func(150);
	son::base::func(100);
}

int main() {

	//test01();//同名静态成员变量访问方式

	test02();

	system("pause");
	return 0;
}