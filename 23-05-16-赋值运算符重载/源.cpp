#include<iostream>
#include<string>

using namespace std;

/*	赋值运算符重载
	*c++编译器至少给一个类添加4个函数
		1.默认构造函数(无参 ,函数体为空)
		2.默认析构函数(无参,函数体为空)
		3.默认拷贝构造函数,对属性进行值拷贝
		4.赋值运算符 operator=,对属性进行值拷贝
*/

/*
	*赋值运算符重载	
	  *
*/

class MyClass
{
	friend void friend_test(MyClass& p);//友元
public:
	MyClass(int age,string name) {
		NAME = name;
		M_nume_age = new int(age);//堆区创建的空间

	}

	~MyClass(){
		if (M_nume_age!=NULL){
			delete M_nume_age;
			M_nume_age = NULL;
		}
	}

	//重载 赋值运算符
	MyClass& operator=(MyClass& p) {
		//编译器是前拷贝
		//M_nume_age = p.M_nume_age;

		//应该先判断是否有属性在堆区,如果有先释放
		if (M_nume_age!=NULL){
			delete M_nume_age;
			M_nume_age = NULL;
		}
		//如果释放了在重新开辟一个空间 先把原来的释放干净
		//深拷贝
		M_nume_age = new int(*p.M_nume_age);

		return *this;
	}

public:
	
	string NAME;
private:
	int* M_nume_age;
};

void friend_test(MyClass& p) { //全局函数 ->静态区
	cout << p.NAME<<"年龄: " << *p.M_nume_age << endl;
}

void test01() {
	MyClass P1(10, "P1");
	friend_test(P1);
	cout << endl;

	MyClass P2(20,"P2");
	friend_test(P2);
	cout<<endl;

	P2 = P1;
	friend_test(P2);

}

int main() {

	test01();	//局部函数


	system("pause");
	return 0;
}