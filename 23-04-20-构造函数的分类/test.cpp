#include<iostream>
#include<string>

using namespace std;


/***
	1.���캯���ķ���(classification)and����(call)
		*����
			*���ղ�������: �޲ι���(Ĭ�Ϲ���)   �вι���
			*�������ͷ���: ��������  ��ͨ����
		*����
			* ���ŷ�
			* ��ʾ��
			* ��ʽת����
***/

class MyClass
{
public:
	//���캯������
	MyClass() {	//�޲κ�������
		cout << "�޲ι��캯������" << endl;
	 }

	MyClass(int a) {//�вκ�������
		age = a;
		cout << "�вι��캯������" << endl;
	}

	//�������캯��
	MyClass(const MyClass &p) {

		//��������������,�������ҵ�����
		age = p.age;
		cout << "�������캯������" << endl;
	}

	//������������
	~MyClass() {
		cout << "���������ĵ���" << endl;
	}
private:
	int age;
};


void test_1() {//* ���ŷ�
	MyClass p0;		//Ĭ�Ϲ��캯������
	MyClass p1(10);	//�вι��캯������
	MyClass p2(p1); //�������캯������

	/* ע������:����Ĭ�ϲ�����ʱ��Ҫ���();��Ϊ���������,����������Ϊ��һ����������,������Ϊ�ڴ�������	*/

}

void test_2() {//* ��ʾ��

	MyClass p0_0;					//Ĭ�Ϲ��캯������
	MyClass p1_1= MyClass(10);		//�вι��캯������
	MyClass p2_2= MyClass(p1_1);	//�������캯������

	/*
	*   1.0 MyClass(10);(��������) ___>�ص�:������ִ�н�����,ϵͳ���������յ���������
	*	2.0 ��Ҫ���ÿ������캯��,��ʼ����������(MyClass(P2)),��������Ĭ����Ϊ MyClass(P2)�ȼ��� MyClass p3; ��������
	*/
}
//����
void test() {
	
	//* ���ŷ�
		test_1();
	
	//* ��ʾ��
		test_2();

	//* ��ʽת����
		MyClass p4 = 10;//�൱��д�� MyClass p4=MyClass p4(10) �вι���
		MyClass p5 = p4;//��������
	
}

int main() {

	test();


	system("pause");
	return 0;
}