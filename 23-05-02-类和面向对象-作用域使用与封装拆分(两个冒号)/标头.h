#pragma once //��ֹ���ذ���ͷ�ļ�

#include<iostream>
#include<string>

using namespace std; 

class MyClass
{
public:				//����Ȩ��
	MyClass();		//�޲ι��캯��

	MyClass(int a);	//�вι��캯��

	MyClass(MyClass& p);//�������캯��

	~MyClass();			//��������

	int M_b;
private:			//˽��Ȩ��
	int M_a;

};

