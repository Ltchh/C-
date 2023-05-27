#include<iostream>
#include<string>

using namespace std;

/*	继承对象构造与析构函数的调用顺序
	*
	*
	*
*/

class myclass {
public:
	myclass(){
		cout << "myclass构造函数" << endl;
	}
	~myclass() {
		cout << "myclass析构函数" << endl;
	}
	
};

class base:public myclass {
public:
	base() {
		cout << "mybace构造函数" << endl;
	}
	~base() {
		cout << "mybase析构函数" << endl;
	}
};
void test01() {
	myclass p1;
	// 先析构后构造
	
	base p2;
	//先父类构造->子类构造->子类析构->父类析构

	//如果两个一起
	//父(本)类构造 ->  (继承)父类构造->  子类构造->
	//子类析构->       (继承)父亲析构->  父(本)类析构
}
int main() {

	test01();



	system("pause");
	return 0;
}