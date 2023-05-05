#include<iostream>
#include<string>

using namespace std;

/*
*	成员变量和成员函数分开存储
		*只有非静态成员的变量才属于类的对象 
			*成员变量 和 成员函数 是分开存储 
		* 
* 
*/

class MyClass
{
public:
	MyClass();

	
	

	int M_a;			 //非静态成员		属于类的对象上
	static int M_b;		 //静态成员变量		不属于类的对象上 静态成员类内声明 内外初始化
	void func01();		 //非静态成员函数	不属于类的对象上
	static void func02();//静态成员函数		不属于类的对象上

	~MyClass();
private:

};

int MyClass::M_b = 150;

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void test01() {

	MyClass P1;

	//空对象占用的空间是:1
	//C++编译器会给每一个空对象分配一个字节空间;是为了区分空对象占用的位置
	//每个空对象应该有一个独一无二的内存地址;
	cout << "sizeof(p)=" << sizeof(P1) << endl;

}

void test02() {

	MyClass P2;
	cout << "sizeof(p)" << sizeof(P2) << endl;//计算出的值是4 不包含静态成员的空间


}

int main() {

	
	//test01();

	test02();

	system("pause");
	return 0;
}
