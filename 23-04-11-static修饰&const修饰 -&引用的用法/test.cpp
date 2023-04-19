#include<iostream>

using namespace std;

int& test01() {
	int a = 10;	//局部变量存放在四区中的 ->栈区
	return a;
}

int& test02() {
	static int a = 10; //静态变量存放在全局区,全局区数据在程序结束后系统释放
	return a;
}

void static_ () { //static修饰的静态变量
	//引用做函数的返回值
	//1.不要返回局部变量的引用
		//int& ref = test01();  //函数返回a 然后给a取了一个test01()的别名;
		//cout << "ref=" << ref << endl;//这是错误的用法 第一次调用编译器给你暂存了一次
		//cout << "ref=" << ref << endl;//这是错误的用法第二次调用就无法调用会发生乱码

	//2.函数的调用可以作为左值

	int& ref_02 = test02(); //red_02是test02的别名
	cout << "ref_02=" << ref_02 << endl;
	cout << "ref_02=" << ref_02 << endl;

	test02() = 100;
	//如果函数的返回值是引用,这函数调用可以作为左值
	cout << "ref_02=" << ref_02 << endl;
	cout << "ref_02=" << ref_02 << endl;

	//函数返回a 然后给a取了一个test02()的别名;

}

void print(const int& b) {//加入const之后变为只读 ,代表不可以修改

	//b =100; //报错 const修饰后左值不可以修改
	cout << "b=" << b << endl;

}

void const_() {//const修饰的变量

	//常量引用

	//使用场景:用来修饰形参,防止误操作

	int a = 10;

	//加上const之后 编译器将代码修改为: int temp=10,const int& ref=temp ;引用(别名)

	const int& ref = 10;

	//ref = 10;  //加入const之后变为只读 ,代表不可以修改

	int b = 100;

	print(b);//打印

}

int main() {

	static_ (); //static修饰的静态变量

	const_();//const修饰的变量
	


	system("pause");

	return 0;
}