#include<iostream>

using namespace std;


int& print(int ,int a = 10 ) {

	//int ��ռλ

	//int = 10 ��Ĭ��ֵ �ڲ���ֵ��ʱ��a��10,�����ֵ�Ļ���20

	return a;
}

int& print() {

	
	static int a = 1;
	return a;
}

int main() {

	//ȡ����

	int a = 10;
	int& b = a;

	//����Ĭ��ֵ

	int pret=print(10,20);

	b=print()=20;//����

	cout << "print()=" << (print()) << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b<<endl;

	system("pause");

	return 0;
}