#include<iostream>
#include<string>

using namespace std;

/*
* this 指针概念
	*1.解决名称冲突 
	* 2.返回对象本身*this
*/

class MyClass
{
public:
	MyClass(int age);

	 MyClass& MyCaddMyC(MyClass& p) {
		this->age += p.age;

		return *this;//this指向P2的指针,而*this指向的就是P2这个本体
	}

	~MyClass();
	int age;


private:

};

MyClass::MyClass(int age)
{
	this->age = age;//this指针指向 被调用的成员函数 所属对象(传真值名和类成员名一样)

	
}

MyClass::~MyClass()
{
}

void test01() {//解决名称冲突
	MyClass p1(19);
	cout << "P1=" << p1.age << endl;

}

void test02() {
	MyClass p2(10);

	MyClass P2_2(10);

	//链式编程思想
	p2.MyCaddMyC(p2).MyCaddMyC(p2).MyCaddMyC(p2);

	cout << "p2_2.age" << P2_2.age << endl;

	cout << "P2.age=" << p2.age << endl;


}

int main() {

	//test01();

	test02();
	system("pause");
	return 0;
}