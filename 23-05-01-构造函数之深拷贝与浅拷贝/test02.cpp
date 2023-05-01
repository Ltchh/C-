#include<iostream>
#include<string>

using namespace std;

/*
		*深拷贝与浅拷贝
			*浅拷贝->简单的值拷贝操作		(浅拷贝带来的问题就是堆区的内存重复释放)

			* 深拷贝->在堆区申请空间,进行拷贝操作
*/


class MyClass
{
public:

	MyClass(const int& age,int height);//有参构造函数调用
	MyClass(const MyClass& p);			//深拷贝构造函数调用
	~MyClass();
	int M_age;

	int* M_height;

private:

};

MyClass::MyClass(const int& age,int height) {
	M_age = age;
	M_height = new int(height);

	cout << "值传构造函数\n" << endl;
}

//自己实现拷贝构造函数 解决浅拷贝堆区数据的问题

MyClass::MyClass(const MyClass& p)
{
	M_age = p.M_age;

	//M_height = p.M_height;  编译器默认实现的就是这行代码 (赋值的方式存储)
	//深拷贝操作
	M_height = new int(*p.M_height);

	cout << "拷贝构造函数调用\n" << endl;
}

MyClass::~MyClass()
{

	if (NULL!=M_height)
	{
		delete M_height;
		M_height = NULL;
	}
	cout << "析构函数\n" << endl;
}

void test02() {

	MyClass P1(10,160);
	cout << "P1.age=" << P1.M_age << "\tP1.height=" << *P1.M_height << endl;
	cout << endl;
	MyClass P2(P1);

	cout << "P2.age=" << P2.M_age << "\tP2.height=" <<*P2.M_height<< endl;
	cout<<endl;

}

int main() {

	test02();//深拷贝

	system("pause");
	return 0;
}