#include<iostream>
#include<string>

using namespace std;

/*
* this ָ�����
	*1.������Ƴ�ͻ 
	* 2.���ض�����*this
*/

class MyClass
{
public:
	MyClass(int age);

	 MyClass& MyCaddMyC(MyClass& p) {
		this->age += p.age;

		return *this;//thisָ��P2��ָ��,��*thisָ��ľ���P2�������
	}

	~MyClass();
	int age;


private:

};

MyClass::MyClass(int age)
{
	this->age = age;//thisָ��ָ�� �����õĳ�Ա���� ��������(����ֵ�������Ա��һ��)

	
}

MyClass::~MyClass()
{
}

void test01() {//������Ƴ�ͻ
	MyClass p1(19);
	cout << "P1=" << p1.age << endl;

}

void test02() {
	MyClass p2(10);

	MyClass P2_2(10);

	//��ʽ���˼��
	p2.MyCaddMyC(p2).MyCaddMyC(p2).MyCaddMyC(p2);

	cout << "p2_2.age" << P2_2.age << endl;

	cout << "P2.age=" << p2.age << endl;


}

int main() {

	//test01();

	test02();
	system("pause");
	return 0;
}