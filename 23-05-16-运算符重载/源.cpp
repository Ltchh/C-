#include<iostream>
#include<string>

using namespace std;

/*
	* 运算符重载 
		*成员函数函数重载-> "+"
		*全局函数函数重载-> "+"
		* 
		* 运算符也可以发生重载
*/

class MyClass
{
public:

	//成员函数重载 -> "+"
	//MyClass operator+(MyClass& p) {  //operator+  是一个关键字   函数名两个函数内部相加编译器给的一个名称
	//	MyClass temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}

	int m_A;
	int m_B;
private:

};

//全局函数重载
MyClass operator+(MyClass & p1, MyClass& p2) {
	MyClass temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_A + p2.m_B;
	return temp;

}

//运算符全局函数重载
MyClass operator+(MyClass& p1, int num) {
	MyClass temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}

void test01() {

	MyClass p1;
	p1.m_A = 10;
	p1.m_B = 11;

	MyClass p2;
	p2.m_A = 10;
	p2.m_B = 11;

	//成员函数的本质调用
	//MyClass  p3 = p1.operator+(p2);
	MyClass p3 = p1 + p2;	//简化

	//全局函数调用的本质
	//MyClass p3 = operator+(p1, p2);
	
	MyClass p4 = p1 + p2;	//简化

	//运算符也可以发生函数重载
	//MyClass p5 = operator+(p1, 15);
	MyClass p5 = p1 + 15;	//简化

	cout << "p3.m_A=" << p3.m_A << endl;
	cout << "p3.m_B=" << p3.m_B << endl;

	cout << "p4.m_A=" << p4.m_A << endl;
	cout << "p4.m_B=" << p4.m_B << endl;

	cout << "p5.m_A=" << p5.m_A << endl;
	cout << "p5.m_B=" << p5.m_B << endl;
}

int main() {

	test01();

	system("pause");
	return 0;

}