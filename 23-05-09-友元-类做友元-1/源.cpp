#include<iostream>
#include<string>

using namespace std;

/*
	*��Ԫ֮������Ԫ 
	* 
	* 
*/

class MyClass01;

class MyClass  //g
{

	friend  class MyClass01;

public: //����Ȩ��

	MyClass();//���캯��

	void visit();//�ιۺ��� ����Buiding �е�����

	MyClass01 * building;

	~MyClass();//��������


private://˽��Ȩ��

};

MyClass::MyClass()
{
	//����������Ķ���
	building = new MyClass01;
	
}

void MyClass::visit() {

	cout << "�û�ͷ���ڷ���:" << building->M_sittingRoom << endl;
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
//����д�����Ա����
MyClass01::MyClass01()
{
	M_sittingRoom = "����";
	M_bedroom = "����";
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