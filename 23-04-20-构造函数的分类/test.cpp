#include<iostream>
#include<string>

using namespace std;


/***
	1.构造函数的分类(classification)and调用(call)
		*分类
			*按照参数分类: 无参构造(默认构造)   有参构造
			*按照类型分类: 拷贝构造  普通构造
		*调用
			* 括号法
			* 显示法
			* 隐式转化法
***/

class MyClass
{
public:
	//构造函数调用
	MyClass() {	//无参函数构造
		cout << "无参构造函数调用" << endl;
	 }

	MyClass(int a) {//有参函数构造
		age = a;
		cout << "有参构造函数调用" << endl;
	}

	//拷贝构造函数
	MyClass(const MyClass &p) {

		//将传入对象的属性,拷贝到我的身上
		age = p.age;
		cout << "拷贝构造函数调用" << endl;
	}

	//析构函数调用
	~MyClass() {
		cout << "析构函数的调用" << endl;
	}
private:
	int age;
};


void test_1() {//* 括号法
	MyClass p0;		//默认构造函数调用
	MyClass p1(10);	//有参构造函数调用
	MyClass p2(p1); //拷贝构造函数调用

	/* 注意事项:调用默认参数的时候不要添加();因为添加了括号,编译器会认为是一个函数声明,不会认为在创建对象	*/

}

void test_2() {//* 显示法

	MyClass p0_0;					//默认构造函数调用
	MyClass p1_1= MyClass(10);		//有参构造函数调用
	MyClass p2_2= MyClass(p1_1);	//拷贝构造函数调用

	/*
	*   1.0 MyClass(10);(匿名对象) ___>特点:当程序执行结束后,系统会立即回收掉匿名对象
	*	2.0 不要利用拷贝构造函数,初始化匿名对象(MyClass(P2)),编译器会默认认为 MyClass(P2)等价与 MyClass p3; 对象声名
	*/
}
//调用
void test() {
	
	//* 括号法
		test_1();
	
	//* 显示法
		test_2();

	//* 隐式转化法
		MyClass p4 = 10;//相当于写了 MyClass p4=MyClass p4(10) 有参构造
		MyClass p5 = p4;//拷贝构造
	
}

int main() {

	test();


	system("pause");
	return 0;
}