#include"��ͷ.h"

MyClass::MyClass()			// ::-> MyClass��������
{	
	cout << "�޲ι��캯��" << endl;
}

MyClass::MyClass(int a) :M_a(a) {	//�вι��캯��

	//M_a = a;  == :M_a(a)
}

MyClass::MyClass(MyClass& p){//�������캯��*** ����Լ���д�������캯�������������д,����ֻ��ֵ���� 
									//-������ȿ���(��������)���������
	M_b = p.M_a;
}

MyClass::~MyClass()			//��������
{

}

