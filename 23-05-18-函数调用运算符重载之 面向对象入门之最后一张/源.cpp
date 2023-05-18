#include<iostream>
#include<string>

using namespace std;

/*	函数调用运算符重载
	*函数调用运算符()也可以重载
	*	由于重载后使用方式非常想函数的调用,因此称为仿函数
	* 仿函数没有固定的写法 ,非常灵活
	* 
*/
class MyClass
{
public:

	void operator()(int test01) {	//打印函数重载
		cout << test01 << endl;
	}
	
	int operator()(int a, int b) {	//运算函数重载
		return a + b;
	}

private:

};

void test01() {

	MyClass P1;
	P1(1);//由于使用起来非常类似于函数调用,因此称为仿函数
	int ret=P1(15, 20);
	P1(ret);

	//匿名函数对象 myclass()->匿名对象
	cout << MyClass()(13,1) << endl; 
	}
int main() {


	test01();


	system("pause");
	return 0;
}