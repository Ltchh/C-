#include<iostream>
#include<string>

using namespace std;

/*继承中的对象大小
	*
	*
	*
*/

class MyClass
{
public://公共权限
	int m_a;
protected://保护权限
	int m_b;
private://私有权限
	int m_c;
};

class son :MyClass {
public:
	int m_d;
};

void test01() {

	//16
	//父类中的所有非静态成员都子类被继承
	//父类私有成员都被编译器隐藏,因为访问不到,但是确实被继承下去了
	cout << "sizeof son=" << sizeof(son) << endl;
}
int main() {

	test01();



	system("pause");
	return 0;
}