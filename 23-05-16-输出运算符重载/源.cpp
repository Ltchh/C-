#include<iostream>
#include<string>

using namespace std;
/*
	输出运算符重载输出
*/

class MyClass
{
	friend ostream& operator<<(ostream& cout, MyClass& p1);//友元 可以访问私有权限的成员
public:
	
	MyClass(int &a, int &b) {
		M_A = a;
		M_B = b;
	}
	
private:

	int M_A;
	int M_B;
};

//只能利用全局函数重载左移运算符
ostream & operator<<(ostream& cout, MyClass& p1) { //ostream 输出流这个类型 对象只能有一个
	cout << p1.M_A << endl;
	cout << p1.M_B << endl;
	return cout;
}

void test01() {
	int a;
	int b;
	cin >> a >> b;

	MyClass p1(a,b);

	cout << p1 << "hellow word" << endl; //直接输出一个对象

}


int main() {

	test01();

	return 0;
}