#include<iostream>

using namespace std;


int& print(int ,int a = 10 ) {

	//int 是占位

	//int = 10 是默认值 在不传值的时候a是10,如果传值的话是20

	return a;
}

int& print() {

	
	static int a = 1;
	return a;
}

int main() {

	//取别名

	int a = 10;
	int& b = a;

	//函数默认值

	int pret=print(10,20);

	b=print()=20;//重载

	cout << "print()=" << (print()) << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b<<endl;

	system("pause");

	return 0;
}