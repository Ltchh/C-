#include<iostream>
#include<string>

using namespace std;

/*
	��ʼ���б�=>C++�ṩ�˳�ʼ���б��﷨,������ʼ������

		*�﷨: ���캯��():����1(ֵ1),����2(ֵ2),....{}
		
*/

class MyClass
{
public:
	MyClass(int &a,int &b,int &c) : M_a(a), M_b(b), M_c(c) {
	/*
	MyClass::MyClass(int& a,int& b,int& c){
	M_a = a;
	M_b = b;
	M_c = c;
	}*/

	}
	~MyClass();
	int M_a, M_b, M_c;
private:

};

//MyClass::MyClass(int& a,int& b,int& c)
//{
//	M_a = a;
//	M_b = b;
//	M_c = c;
//}

MyClass::~MyClass(){

}

void test01() {
	int a, b, c;
	cin >> a >> b >> c;
	MyClass P1(a,b,c);
	cout << "P1.M_a=" << P1.M_a << "\tP1.M_b=" << P1.M_b << "\tP1.M_c=" << P1.M_c << endl;
}

int main() {


	test01();
	system("pause");
	return 0;
}