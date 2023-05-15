#include<iostream>
#include<string>

using namespace std;

/*
	*友元之类做友元 
	* 
	* 
*/

class MyClass01;

class MyClass  //g
{

	friend  class MyClass01;

public: //公共权限

	MyClass();//构造函数

	void visit();//参观函数 访问Buiding 中的属性

	MyClass01 * building;

	~MyClass();//析构函数


private://私有权限

};

MyClass::MyClass()
{
	//创建建筑物的对象
	building = new MyClass01;
	
}

void MyClass::visit() {

	cout << "好基头正在访问:" << building->M_sittingRoom << endl;
}

MyClass::~MyClass()
{
}

class MyClass01//bu
{
public:
	MyClass01();

	~MyClass01();

public:
	string M_sittingRoom;
	

private:
	string M_bedroom;
};
//类外写构造成员函数
MyClass01::MyClass01()
{
	M_sittingRoom = "客厅";
	M_bedroom = "卧室";
}

MyClass01::~MyClass01()
{
}

void test01() {

	MyClass gg;
	gg.visit();

}



int main() {

	test01();

	system("pause");
	return 0;
}