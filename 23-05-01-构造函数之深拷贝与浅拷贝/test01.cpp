//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
///*
//		*�����ǳ����
//			*ǳ����->�򵥵�ֵ��������
//			
//			* ���->�ڶ�������ռ�,���п�������
//*/
//
//
//class MyClass
//{
//public:
//
//	MyClass(const int& age);
//	MyClass(const MyClass& p);
//	~MyClass();
//	int M_age;
//private:
//
//};
//
//MyClass::MyClass(const int& age) {
//	M_age = age;
//
//	cout << "ֵ�����캯��\n" << endl;
//}
//
//MyClass::MyClass(const MyClass& p)
//{
//	M_age = p.M_age;
//
//	cout << "ֵ�������캯��\n" << endl;
//}
//
//MyClass::~MyClass()
//{
//	cout << "��������\n" << endl;
//}
//
//void test01() {
//
//	MyClass P1(10);
//
//	MyClass P2(P1);
//
//	cout << "P2=" << P2.M_age <<"\n" << endl;
//
//}
//
//int main() {
//
//	test01();//ǳ����
//
//	system("pause");
//	return 0;
//}