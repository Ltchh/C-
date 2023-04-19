#include<iostream>

using namespace std;

//函数重载的注意事项

	//1.引用作为重载的条件

void fun(int &a) {// int& a=10 不合法的
	cout << "调用(int& a)" << endl;
}

void fun(const int& a) { //const int& a=10合法的代码
	cout << "调用(const int& a)" << endl;
}

	//2.函数重载碰到默认参数

void fun2(int a,int b=10) {
	cout << "调用fun2(int a,int b =10)" << endl;
}


void fun2(int a) {
	cout << "调用fun2(int a)" << endl;
}

int main() {
	int a = 10;

	fun(a);//调用无const修饰的

	fun(10);//调用有const修饰的

	fun2(15);//当函数重载碰到默认参数,出现二义性,报错,尽量避免

	system("pause");
	return 0;
}