#include<iostream>
#include<string>

using namespace std;
/*
	���������������
*/

class MyClass
{
	friend ostream& operator<<(ostream& cout, MyClass& p1);//��Ԫ ���Է���˽��Ȩ�޵ĳ�Ա
public:
	
	MyClass(int &a, int &b) {
		M_A = a;
		M_B = b;
	}
	
private:

	int M_A;
	int M_B;
};

//ֻ������ȫ�ֺ����������������
ostream & operator<<(ostream& cout, MyClass& p1) { //ostream ������������ ����ֻ����һ��
	cout << p1.M_A << endl;
	cout << p1.M_B << endl;
	return cout;
}

void test01() {
	int a;
	int b;
	cin >> a >> b;

	MyClass p1(a,b);

	cout << p1 << "hellow word" << endl; //ֱ�����һ������

}


int main() {

	test01();

	return 0;
}