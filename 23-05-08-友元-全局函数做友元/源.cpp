#include<iostream>
#include<string>

using namespace std;


/*
* ��Ԫ
* �ؼ��� friend 
* 
*/


class MyClass
{

	friend void goodgay(MyClass* buiding);//*************ע��*******************
	//����һ���ؼ��� friend�� goodgay��MyClass��ĺ�����,
	//�Ϳ��Է���MyClass���˽�г�Ա����

public:
	MyClass();

	~MyClass();


public:
	string M_SittingRoom;//����
private:
	string M_BedRoom;//����
};

MyClass::MyClass()
{
	M_SittingRoom = "����";
	M_BedRoom = "����";
}

MyClass::~MyClass()
{
}

void goodgay(MyClass* buiding) {//ȫ�ֺ���

	cout << "�û���ȫ�ֺ��� ���ڷ���:" << buiding->M_SittingRoom << endl;
	cout << "�û���ȫ�ֺ��� ���ڷ���:" << buiding->M_BedRoom << endl;
	//��������� �ǲ����Է���MyClass���˽�г�Ա���� ,����friend ���������������,
	//��������Ԫ�� �⺯���Ϳ��Է�����ĵ�˽�г�Ա������;
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
