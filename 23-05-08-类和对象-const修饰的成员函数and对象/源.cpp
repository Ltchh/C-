#include<iostream>
#include<string>

using namespace std;

/*
* const����->������
		* ��Ա�������const�����ǳ�Ϊ�ź���Ϊ������
		* �������ڲ������޸ĳ�Ա����
		* ��Ա��������ʱ�ӹؼ��� mutable �� �ڳ���������Ȼ�����޸�
		  
* const����->������ 
		* ��������ǰ����const ��Ϊ�ö���Ϊ������ 
		* ������ֻ�ܵ��ó�����
		



*/

class MyClass
{
public:
	MyClass();

	//this ָ��ı��� ��ָ�볣��  ָ���ָ���ǲ������޸�
	//const MyClass* const this
	//�ڳ�Ա�����������const ,���ε���thisָ��,��ָ��ָ���ֵҲ�������޸�

	void showmyclass() const{//����Ա����


	}

	void func();//��ͨ����

	~MyClass();

	int M_a;
	mutable int	M_b;//������� ,��ʹ�ڳ������� ,Ҳ�ǿ����޸����ֵ ,�ӹؼ��� mutable  (const�� mutable����->�������Ӧ)
private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void test01() {

	MyClass p01;

	p01.showmyclass();
}


void test02() {
	const MyClass p02;
	//p02.M_a = 120;		//�ڶ���ǰ���� const ,��Ϊ��������ֵ�����Ա��޸�
	p02.M_b = 130;//M_b������ֵ ,�ڳ�������Ҳ�ǿ����޸ĵ�;

	//������ֻ�ܵ��ó�����
	p02.showmyclass(); //������

	//p02.func();   //�������ܵ�����ͨ��Ա����,��Ϊ��ͨ��Ա���������޸�����
}
int main() {

	test01();//������

	test02();//������

	system("pause");
	return 0;
}