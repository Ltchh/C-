#include<iostream>
#include<string>

using namespace std;

	/*关系运算符重载 ==  !=
	*	1.等于关系  ==
	*
	*	2.不等于关系 !=
	*/

class MyClass
{
public:
	MyClass(string name, int age) : M_name(name), M_age(age) {};
	
	//相等运算符重载 ==
	bool operator==(MyClass& P2) { //传过来的是P2 和P1比较  自身是P1
		if (this->M_name==P2.M_name&&this->M_age==P2.M_age)
			return true;
		return false;
	}

	//不相等关系运算符重载 !=
	bool operator!=(MyClass& P2) {
		if (this->M_name == P2.M_name && this->M_age == P2.M_age)
			return false;
		return true;
	}

public:
	string M_name;
	int M_age;

private:
	
};
void test01() {

	MyClass P1("TOM", 20);

	MyClass P2("TOME", 20);
	

	//相等运算符重载 ==
	if (P1==P2)
	{
		cout << "P1和P2相等" << endl;
	}
	else
	{
		cout << "P1和P2不相等" << endl;
	}

	//不相等关系运算符重载 !=
	if (P1 != P2)
	{
		cout << "P1和P2不相等" << endl;
	}
	else
	{
		cout << "P1和P2相等" << endl;
	}


}

int main() {

	test01();



	system("pause");
	return 0;
}