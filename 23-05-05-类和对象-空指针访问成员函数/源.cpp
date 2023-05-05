#include<iostream>
#include<string>

using namespace std;

class MyClass
{
public:
	void my_c() {
		cout << "my is class" << endl;
	}
	
	void my_cc() {

		if (this == NULL)//代码的健壮性 防止出现传入的值为空 崩溃程序  (代码健壮性)
			return;
		cout << "my_age=" << this->M_age << endl;//M_age默认前面有一个this->M_age
	}

	int M_age;
private:

};


void test01() {

	MyClass *P1 = NULL;

	//P1->my_c();
	P1->my_cc();

}
int main() {

	test01();

	system("pause");
	return 0;
}