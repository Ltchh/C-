#include<iostream>
#include<string>

using namespace std;

/*
* const修饰->常函数
		* 成员函数后加const后我们称为着函数为常函数
		* 常函数内不可以修改成员属性
		* 成员属性声明时加关键字 mutable 后 在长函数中依然可以修改
		  
* const修饰->常对象 
		* 声明对象前加上const 称为该对象为常对象 
		* 常对象只能调用常函数
		



*/

class MyClass
{
public:
	MyClass();

	//this 指针的本质 是指针常量  指针的指向是不可以修改
	//const MyClass* const this
	//在成员函数后面添加const ,修饰的是this指向,让指针指向的值也不可以修改

	void showmyclass() const{//常成员函数


	}

	void func();//普通函数

	~MyClass();

	int M_a;
	mutable int	M_b;//特殊变量 ,即使在常函数中 ,也是可以修改这个值 ,加关键字 mutable  (const锁 mutable解锁->两个相对应)
private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void test01() {

	MyClass p01;

	p01.showmyclass();
}


void test02() {
	const MyClass p02;
	//p02.M_a = 120;		//在对象前加上 const ,变为常对象左值不可以被修改
	p02.M_b = 130;//M_b是特殊值 ,在常对象下也是可以修改的;

	//常对象只能调用常函数
	p02.showmyclass(); //常函数

	//p02.func();   //常对象不能调用普通成员函数,因为普通成员函数可以修改属性
}
int main() {

	test01();//常函数

	test02();//常对象

	system("pause");
	return 0;
}