//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
///*
//		*深拷贝与浅拷贝
//			*浅拷贝->简单的值拷贝操作
//			
//			* 深拷贝->在堆区申请空间,进行拷贝操作
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
//	cout << "值传构造函数\n" << endl;
//}
//
//MyClass::MyClass(const MyClass& p)
//{
//	M_age = p.M_age;
//
//	cout << "值拷贝构造函数\n" << endl;
//}
//
//MyClass::~MyClass()
//{
//	cout << "析构函数\n" << endl;
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
//	test01();//浅拷贝
//
//	system("pause");
//	return 0;
//}