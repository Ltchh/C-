#include<iostream>
#include<string>

using namespace std;

/*	��ֵ���������
	*c++���������ٸ�һ�������4������
		1.Ĭ�Ϲ��캯��(�޲� ,������Ϊ��)
		2.Ĭ����������(�޲�,������Ϊ��)
		3.Ĭ�Ͽ������캯��,�����Խ���ֵ����
		4.��ֵ����� operator=,�����Խ���ֵ����
*/

/*
	*��ֵ���������	
	  *
*/

class MyClass
{
	friend void friend_test(MyClass& p);//��Ԫ
public:
	MyClass(int age,string name) {
		NAME = name;
		M_nume_age = new int(age);//���������Ŀռ�

	}

	~MyClass(){
		if (M_nume_age!=NULL){
			delete M_nume_age;
			M_nume_age = NULL;
		}
	}

	//���� ��ֵ�����
	MyClass& operator=(MyClass& p) {
		//��������ǰ����
		//M_nume_age = p.M_nume_age;

		//Ӧ�����ж��Ƿ��������ڶ���,��������ͷ�
		if (M_nume_age!=NULL){
			delete M_nume_age;
			M_nume_age = NULL;
		}
		//����ͷ��������¿���һ���ռ� �Ȱ�ԭ�����ͷŸɾ�
		//���
		M_nume_age = new int(*p.M_nume_age);

		return *this;
	}

public:
	
	string NAME;
private:
	int* M_nume_age;
};

void friend_test(MyClass& p) { //ȫ�ֺ��� ->��̬��
	cout << p.NAME<<"����: " << *p.M_nume_age << endl;
}

void test01() {
	MyClass P1(10, "P1");
	friend_test(P1);
	cout << endl;

	MyClass P2(20,"P2");
	friend_test(P2);
	cout<<endl;

	P2 = P1;
	friend_test(P2);

}

int main() {

	test01();	//�ֲ�����


	system("pause");
	return 0;
}