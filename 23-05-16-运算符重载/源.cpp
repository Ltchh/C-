#include<iostream>
#include<string>

using namespace std;

/*
	* ��������� 
		*��Ա������������-> "+"
		*ȫ�ֺ�����������-> "+"
		* 
		* �����Ҳ���Է�������
*/

class MyClass
{
public:

	//��Ա�������� -> "+"
	//MyClass operator+(MyClass& p) {  //operator+  ��һ���ؼ���   ���������������ڲ���ӱ���������һ������
	//	MyClass temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}

	int m_A;
	int m_B;
private:

};

//ȫ�ֺ�������
MyClass operator+(MyClass & p1, MyClass& p2) {
	MyClass temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_A + p2.m_B;
	return temp;

}

//�����ȫ�ֺ�������
MyClass operator+(MyClass& p1, int num) {
	MyClass temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}

void test01() {

	MyClass p1;
	p1.m_A = 10;
	p1.m_B = 11;

	MyClass p2;
	p2.m_A = 10;
	p2.m_B = 11;

	//��Ա�����ı��ʵ���
	//MyClass  p3 = p1.operator+(p2);
	MyClass p3 = p1 + p2;	//��

	//ȫ�ֺ������õı���
	//MyClass p3 = operator+(p1, p2);
	
	MyClass p4 = p1 + p2;	//��

	//�����Ҳ���Է�����������
	//MyClass p5 = operator+(p1, 15);
	MyClass p5 = p1 + 15;	//��

	cout << "p3.m_A=" << p3.m_A << endl;
	cout << "p3.m_B=" << p3.m_B << endl;

	cout << "p4.m_A=" << p4.m_A << endl;
	cout << "p4.m_B=" << p4.m_B << endl;

	cout << "p5.m_A=" << p5.m_A << endl;
	cout << "p5.m_B=" << p5.m_B << endl;
}

int main() {

	test01();

	system("pause");
	return 0;

}