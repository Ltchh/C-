#include<iostream>
#include<string>

using namespace std;

/*
	*���麯���ͳ�����
	*
	* ���麯���﷨:
	*	virtual ���� ������(�����б�)=0;
	* 
	*���������˴��麯��,����Ҳ��Ϊ������
	* 
	* ��������ص�:
	*	�޷�ʵ��������
	*	�Ӻ���������д�������еĴ��麯��,����Ҳ���ڳ�����
*/

class MyClass
{
public:
	virtual void func() = 0;
	//�����ֻҪ��һ�����麯��,������Ϊ������
	//1.�޷�ʵ��������
	//	��:MyClass p1; ������������ʵ����  ���޷�����p1�����Ķ���p1
	//
	//2.����������� ������д����(����)���麯��,����Ҳ�����ڳ�����->�޷���������

public:
	int a;
	string cha;
private:
};

class MyClass_1:public MyClass//�̳�
{
public:
	void func() {//����������� ������д����(����)���麯��
		cout << "hello word!" << endl;
	}
private:

};

void test01() {
	MyClass_1 p1;
	p1.a = 15;
	p1.cha = "aabd";
	p1.func();//�����
	
	MyClass_1* p2 = new MyClass_1;
	p2->a = 15;
	p2->cha = "1we";
	p2->func();//ָ�����
	delete p2;

}

int main() {

	test01();



	system("pause");
	return 0;
}