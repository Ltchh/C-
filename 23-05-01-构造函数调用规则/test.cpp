#include<iostream>
#include<string>

using namespace std;
/*

		*���캯�����ù���
				* Ĭ�Ϲ��캯��(�޲�,������Ϊ��)
				* Ĭ����������(�޲�,������Ϊ��)
				* Ĭ�Ͽ�������(����.�����Խ���ֵ����)
*/

/*      *���캯�����ù�������:
				*C++�����ṩĬ���޲ι���,�����ṩĬ�Ͽ�������
				* ����û����忽�����캯��,C++�Ͳ������ṩ���ع��캯��

*/

/*
	*һ.����һ����,c++���������ÿһ���඼�������3������

		1.Ĭ�Ϲ��캯��	(��ʵ��)
		2.��������		(��ʵ��)
		3.�������캯��	(ֵ����)

	*��.���д���вι��캯��,�������Ͳ����ṩĬ�Ϲ��캯��,��Ȼ�ṩ�Զ�㿽�����캯��
		���д�˿������캯��,�������Ͳ����ṩ��Ĺ��캯��;
	*/


class MyClass{
public://����Ȩ��
	MyClass();//Ĭ�Ϲ��캯��

	MyClass(int age);//�вι��캯��

	MyClass(const MyClass& p);//�������캯��(ֵ����)  *****ע��*****

	~MyClass();//��������;

	int M_age;

private://˽��Ȩ��

};

MyClass::MyClass()
{
	cout << "Ĭ�Ϲ��캯��" << endl;
}

MyClass::MyClass(int age) {
	M_age = age;
	cout << "�вι��캯��" << endl;
}


MyClass::MyClass(const MyClass& p) {

	M_age = p.M_age;
	cout << "�������캯��" << endl;
}

MyClass::~MyClass()
{

	cout << "������������" << endl;
}



void test01() {
	MyClass P1;
	P1.M_age = 18;

	MyClass P2(P1);

	cout << "P2��ֵ" << P2.M_age << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}