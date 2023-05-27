#include<iostream>
#include<string>

using namespace std;

/*
	*纯虚函数和抽象类
	*
	* 纯虚函数语法:
	*	virtual 类型 函数名(参数列表)=0;
	* 
	*当类中有了纯虚函数,这类也称为抽象类
	* 
	* 抽象类的特点:
	*	无法实例华对象
	*	子函数必须重写抽象类中的纯虚函数,佛则也属于抽象类
*/

class MyClass
{
public:
	virtual void func() = 0;
	//这个类只要有一个纯虚函数,这个类称为抽象类
	//1.无法实例华对象
	//	例:MyClass p1; 这样创建就是实例化  是无法创建p1这个类的对象p1
	//
	//2.抽象类的子类 必须重写父类(基类)的虚函数,佛则也是属于抽象类->无法创建对象

public:
	int a;
	string cha;
private:
};

class MyClass_1:public MyClass//继承
{
public:
	void func() {//抽象类的子类 必须重写父类(基类)的虚函数
		cout << "hello word!" << endl;
	}
private:

};

void test01() {
	MyClass_1 p1;
	p1.a = 15;
	p1.cha = "aabd";
	p1.func();//类访问
	
	MyClass_1* p2 = new MyClass_1;
	p2->a = 15;
	p2->cha = "1we";
	p2->func();//指针访问
	delete p2;

}

int main() {

	test01();



	system("pause");
	return 0;
}