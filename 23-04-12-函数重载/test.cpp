#include<iostream>

using namespace std;

//�������ص�ע������

	//1.������Ϊ���ص�����

void fun(int &a) {// int& a=10 ���Ϸ���
	cout << "����(int& a)" << endl;
}

void fun(const int& a) { //const int& a=10�Ϸ��Ĵ���
	cout << "����(const int& a)" << endl;
}

	//2.������������Ĭ�ϲ���

void fun2(int a,int b=10) {
	cout << "����fun2(int a,int b =10)" << endl;
}


void fun2(int a) {
	cout << "����fun2(int a)" << endl;
}

int main() {
	int a = 10;

	fun(a);//������const���ε�

	fun(10);//������const���ε�

	fun2(15);//��������������Ĭ�ϲ���,���ֶ�����,����,��������

	system("pause");
	return 0;
}