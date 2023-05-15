#include<iostream>
#include<string>

using namespace std;


/*
* 友元
* 关键字 friend 
* 
*/


class MyClass
{

	friend void goodgay(MyClass* buiding);//*************注意*******************
	//加了一个关键字 friend后 goodgay是MyClass类的好朋友,
	//就可以访问MyClass里的私有成员属性

public:
	MyClass();

	~MyClass();


public:
	string M_SittingRoom;//客厅
private:
	string M_BedRoom;//卧室
};

MyClass::MyClass()
{
	M_SittingRoom = "客厅";
	M_BedRoom = "卧室";
}

MyClass::~MyClass()
{
}

void goodgay(MyClass* buiding) {//全局函数

	cout << "好基友全局函数 正在访问:" << buiding->M_SittingRoom << endl;
	cout << "好基友全局函数 正在访问:" << buiding->M_BedRoom << endl;
	//正常情况下 是不可以访问MyClass里的私有成员属性 ,加上friend 在这个类里声明后,
	//变成类的友元后 这函数就可以访问类的的私有成员属性了;
}

void test01() {

	MyClass buiding;
	goodgay(&buiding);
}

int main() {

	test01();

	system("pause");
	return 0;
}
