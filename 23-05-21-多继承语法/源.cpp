#include<iostream>
#include<string>

using namespace std;

/*	多继承语法
	* 语法:
	* class 子类 : 继承方式 父类(基类)1 , 继承方式 父类(基类)2 ,......
	*
	* 多继承中如果父类中出现同名的情况,子类使用的时候需要加上作用域 否则会出现不明确的指示
*/

class base1 {
public:
	base1() {
		m_a = 1;
	}
	int m_a;
};

class base2 {
public:
	base2() {
		m_b = 2;
	}
	int m_b;
};

class son :public base1,public base2{
public:
	son() {
		m_c = 3;
	}
	int m_c;
};

void test01() {
	son p1;
	cout << "son下的c=" << p1.m_c << endl;
	cout << "base1下的a=" << p1.base1::m_a << endl;
	cout << "base2下的b=" << p1.base2::m_b << endl;
}

int main() {

	test01();



	system("pause");
	return 0;
}