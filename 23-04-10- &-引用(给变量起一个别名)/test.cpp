#include <string>
#include <iostream>

using namespace std;

//引用 给一个变量起一个别名 "&"

void reference() {//引用

	int a = 15;

	int& b = a; //把int a变量起一个b的别名;

<<<<<<< HEAD
=======
	// int* cont b=&a;

>>>>>>> 8161cba (娣诲姞)
	/*注意 ==> >
		1.引用必须初始化
			int &b ; 错误

		2.引用一旦初始化后,不可以在对它进行更改
			int c=20;
				b=c ;	错误
				b=c;	是赋值操作
	*/

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	cout << "请给a赋值";
	cin >> a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	cout << "请给b赋值";
	cin >> b;
	cout << "a=" << b << endl;
	cout << "b=" << b << endl;
}

void myswap(int &a, int &b) {  // 交换  ---&a是a的别名; &b是b的别名 只是取的名字相同
	int temp = a;
	a = b;
	b = temp;
}


<<<<<<< HEAD
int& test01() {
	int a = 10;	//局部变量存放在四区中的 ->栈区
	return a;
}

int& test02() {
	static int a = 10; //静态变量存放在全局区,全局区数据在程序结束后系统释放
	return a;
}
=======

>>>>>>> 8161cba (娣诲姞)

int main() {

	int a = 2;
	int b = 5;

	//reference();//引用

	/*1.值传递交换
			值传递,形参不会修饰实参
	*/

	/*2.地址传递交换
			地址传递,形参会修饰实参
	*/

	/*3.引用传递交换
			引用传递,形参会修饰实参	 
	*/

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	myswap(a, b);//交换

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

<<<<<<< HEAD
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
=======

>>>>>>> 8161cba (娣诲姞)

	system("pause");//暂停 system 系统命令
	return 0;
}
