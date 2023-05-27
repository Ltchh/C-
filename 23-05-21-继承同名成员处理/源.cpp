#include<iostream>
#include<string>

using namespace std;

/* 继承同名文件处理方式
	*	访问值类同名成员 直接访问
	*	访问父类同名成员 需加上作用域
	* 
	* 总结:
	*	1.子类对象可以直接访问到子类的同名成员
	*	2.子类对象加上作用域可以访问的父类的同名成员
	*	3.当子类与父类拥有同名的成员函数.子类会隐藏父类中同名成员函数,加上作用域可以访问到父类中同名函数
	*
*/

class base
{
public:
	base() {
		m_a = 100;
	}
	void func() {
		cout << "base函数的调用" << endl;
	}

	void func(int a) {
		cout << "func (int a)" << endl;
	}
	int m_a;
};

class son:public base
{
public:
	son() {
		m_a = 200;
	}
	void func() {
		cout << "son函数的调用" << endl;
	}
	int m_a;
};

void test01() {//同名成员属性的访问
	son p1;
	cout << "son 下 m_a=" << p1.m_a << endl;
	//打印的是son的m_a;

	cout << "base 下 m_a=" << p1.base::m_a << endl;
	//打印的是父类的m_a
	//访问父类的同名成员需要加上作用域;例:
	//p1           .   base            ::    m_a 
	//son创建的类  .   base父类(基类)  ::    成员
}

void test02() {//同名函数的访问

	son p2;
	p2.func();//直接调用son下的fun

	p2.base::func();//调用的是base类(父类/基类)下的func

	//如果子类中出现和父类(基类)同名的成员函数
	//		子类的同名成员会隐藏掉父类的所有同名成员函数
	//如果想访问到父类中被隐藏的同名成员函数,需要加上作用域


	/*访问不传东西的时候子类直接访问 ;父类需加上作用域
	 *如果传东西的时候会发生重载 编译器不晓得是哪一个会报错
	 *所以传东西过去的时候需要加上作用域来确定是哪一个类的成员或者成员函数
	*/
	p2.base::func(100);

}

int main() {

	//test01();//同名成员属性的访问

	test02();//同名函数的访问


	system("pause");
	return 0;
}