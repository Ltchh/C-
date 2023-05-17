#include<iostream>
#include<string>

using namespace std;

/*	运算符重载递增
		* 前置 + +
			*前置++返回本身 &引用	 
		
		* 后置 + +
			*后置++返回值 相当于两个数据 
		
	*/

class MyClass
{
	friend ostream& operator<<(ostream& cout,const MyClass& p1);
public:
	MyClass() {
		M_nume = 0 ;
	}

	//*前置 + +
	//	*前置++返回本身 & 引用
	MyClass& operator++() {
		M_nume++;
		return *this;
	}


	//后置 ++ 运算符
	MyClass operator++(int) {// int表示占位参数,可以用于区分前置递增和后置递增

		//先 记录当时的结果
		MyClass temp = *this;

		//后 递增
		M_nume++;

		//最后 将记录的结果返回
		return temp;
	}
	
private:
	int M_nume;
};

//重载左移运算符全局函数
ostream& operator<<(ostream& cout,const MyClass& p1) {
	cout << p1.M_nume<<endl;
	return cout;
}


void test01() {
	MyClass p1;
	cout << p1 << endl;
	cout << ++p1 << endl;
}

void test02() {

	MyClass p1;

	cout << p1 << endl;
	cout << p1++ << endl;
	cout << p1 << endl;
}

int main() {

	test01();
	test02();

	system("pause");
	return 0;
}