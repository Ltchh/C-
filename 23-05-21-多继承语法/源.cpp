#include<iostream>
#include<string>

using namespace std;

/*	��̳��﷨
	* �﷨:
	* class ���� : �̳з�ʽ ����(����)1 , �̳з�ʽ ����(����)2 ,......
	*
	* ��̳�����������г���ͬ�������,����ʹ�õ�ʱ����Ҫ���������� �������ֲ���ȷ��ָʾ
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
	cout << "son�µ�c=" << p1.m_c << endl;
	cout << "base1�µ�a=" << p1.base1::m_a << endl;
	cout << "base2�µ�b=" << p1.base2::m_b << endl;
}

int main() {

	test01();



	system("pause");
	return 0;
}