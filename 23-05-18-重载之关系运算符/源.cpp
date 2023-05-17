#include<iostream>
#include<string>

using namespace std;

	/*��ϵ��������� ==  !=
	*	1.���ڹ�ϵ  ==
	*
	*	2.�����ڹ�ϵ !=
	*/

class MyClass
{
public:
	MyClass(string name, int age) : M_name(name), M_age(age) {};
	
	//������������ ==
	bool operator==(MyClass& P2) { //����������P2 ��P1�Ƚ�  ������P1
		if (this->M_name==P2.M_name&&this->M_age==P2.M_age)
			return true;
		return false;
	}

	//����ȹ�ϵ��������� !=
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
	

	//������������ ==
	if (P1==P2)
	{
		cout << "P1��P2���" << endl;
	}
	else
	{
		cout << "P1��P2�����" << endl;
	}

	//����ȹ�ϵ��������� !=
	if (P1 != P2)
	{
		cout << "P1��P2�����" << endl;
	}
	else
	{
		cout << "P1��P2���" << endl;
	}


}

int main() {

	test01();



	system("pause");
	return 0;
}