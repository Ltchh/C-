#include<iostream>
#include<string>

using namespace std;

/*
	//对象的初始化和清理

*/

class person
{
public://公共权限
	/*
	1.构造函数
		*没有返回值 不用写 void
		*函数名 与类相同
		*构造函数可以有参数,也可以发生重载
		* 创建对象的时候,构造函数会自动调用,而且只调用一次
	*/

	person() {//()里可以有参数
		cout << "person 构造函数的调用" << endl;
	}

	/*
	2.析构函数 进行清理操作
		*没有返回值 不写 void
		*函数名和类名相同 在名称前加 ~
		*析构函数不可以有参数,不可以发生重载
		* 对象在销毁前 会自动调用析构函数,而且只会调用一次	
	*/

	~person() {//()里不可以有参数
		cout << "person 析构函数的调用"<<endl;
	}

private:

};

/*
	*构造和析构是必须有的实现,如果我们自己不提供,编译器会提供一个空实现的 构造和析构函数
	* 
*/
void test() {
	person p; //在栈上的数据, test();执行完毕后,释放这对象
}

int main() {

	test();

	system("pause");

	return 0;
}