#include<iostream>
#include<string>

using namespace std;

/*
*	��Ա�����ͳ�Ա�����ֿ��洢
		*ֻ�зǾ�̬��Ա�ı�����������Ķ��� 
			*��Ա���� �� ��Ա���� �Ƿֿ��洢 
		* 
* 
*/

class MyClass
{
public:
	MyClass();

	
	

	int M_a;			 //�Ǿ�̬��Ա		������Ķ�����
	static int M_b;		 //��̬��Ա����		��������Ķ����� ��̬��Ա�������� �����ʼ��
	void func01();		 //�Ǿ�̬��Ա����	��������Ķ�����
	static void func02();//��̬��Ա����		��������Ķ�����

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

	//�ն���ռ�õĿռ���:1
	//C++���������ÿһ���ն������һ���ֽڿռ�;��Ϊ�����ֿն���ռ�õ�λ��
	//ÿ���ն���Ӧ����һ����һ�޶����ڴ��ַ;
	cout << "sizeof(p)=" << sizeof(P1) << endl;

}

void test02() {

	MyClass P2;
	cout << "sizeof(p)" << sizeof(P2) << endl;//�������ֵ��4 ��������̬��Ա�Ŀռ�


}

int main() {

	
	//test01();

	test02();

	system("pause");
	return 0;
}
