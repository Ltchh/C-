#include<iostream>
#include<string>

using namespace std;

/*
		*�����ǳ����
			*ǳ����->�򵥵�ֵ��������		(ǳ����������������Ƕ������ڴ��ظ��ͷ�)

			* ���->�ڶ�������ռ�,���п�������
*/


class MyClass
{
public:

	MyClass(const int& age,int height);//�вι��캯������
	MyClass(const MyClass& p);			//������캯������
	~MyClass();
	int M_age;

	int* M_height;

private:

};

MyClass::MyClass(const int& age,int height) {
	M_age = age;
	M_height = new int(height);

	cout << "ֵ�����캯��\n" << endl;
}

//�Լ�ʵ�ֿ������캯�� ���ǳ�����������ݵ�����

MyClass::MyClass(const MyClass& p)
{
	M_age = p.M_age;

	//M_height = p.M_height;  ������Ĭ��ʵ�ֵľ������д��� (��ֵ�ķ�ʽ�洢)
	//�������
	M_height = new int(*p.M_height);

	cout << "�������캯������\n" << endl;
}

MyClass::~MyClass()
{

	if (NULL!=M_height)
	{
		delete M_height;
		M_height = NULL;
	}
	cout << "��������\n" << endl;
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

	test02();//���

	system("pause");
	return 0;
}