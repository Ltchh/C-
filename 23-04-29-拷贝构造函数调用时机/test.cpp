#include<iostream>
#include<string>

using namespace std;

/*	
	* 拷贝析构函数的调用时机:
	
			*使用一个已经创建完毕的对象来初始化一个新的对象
			
			*值传递的方式 给函数参数传值
			 
			*值方式返回局部对象 
	
	*/


class person
{
public://公共权限
	person() {
		cout << "person默认构造函数调用\n" << endl;
	
	};
	~person() {
	
		cout << "析构函数的调用\n" << endl;
	};

	person(int age) {	//有参构造函数
		m_age = age;
		cout << "有参构造函数调用\n" << endl;
	}
	
	person(const person& p) {//拷贝构造函数
		cout << "拷贝构造函数\n" << endl;
		m_age = p.m_age;
	}

	int m_age;

private://私有权限

	//int m_age;

};


void do_work01(person p) {

}

person do_work02() {

	person p1;
	return p1;
}


void test01() {//*使用一个已经创建完毕的对象来初始化一个新的对象
	person p1(20);
	person p2(p1);

	cout << "p2的年龄" << p2.m_age << endl;
	cout << "test01"<<endl;
}

void test02() {//*值传递的方式 给函数参数传值
	person p;

	do_work01(p);

	cout << "test02" << endl;
}

void test03() {//*值方式返回局部对象

	person p = do_work02();

	cout << "test03" << endl;
}

int main() {

	test01();//*使用一个已经创建完毕的对象来初始化一个新的对象

	test02();//*值传递的方式 给函数参数传值

	test03(); //*值方式返回局部对象

	system("pause");
	return 0;
}