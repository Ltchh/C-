#include<iostream>
#include<string>

using namespace std;

/*	
	* �������������ĵ���ʱ��:
	
			*ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
			
			*ֵ���ݵķ�ʽ ������������ֵ
			 
			*ֵ��ʽ���ؾֲ����� 
	
	*/


class person
{
public://����Ȩ��
	person() {
		cout << "personĬ�Ϲ��캯������\n" << endl;
	
	};
	~person() {
	
		cout << "���������ĵ���\n" << endl;
	};

	person(int age) {	//�вι��캯��
		m_age = age;
		cout << "�вι��캯������\n" << endl;
	}
	
	person(const person& p) {//�������캯��
		cout << "�������캯��\n" << endl;
		m_age = p.m_age;
	}

	int m_age;

private://˽��Ȩ��

	//int m_age;

};


void do_work01(person p) {

}

person do_work02() {

	person p1;
	return p1;
}


void test01() {//*ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
	person p1(20);
	person p2(p1);

	cout << "p2������" << p2.m_age << endl;
	cout << "test01"<<endl;
}

void test02() {//*ֵ���ݵķ�ʽ ������������ֵ
	person p;

	do_work01(p);

	cout << "test02" << endl;
}

void test03() {//*ֵ��ʽ���ؾֲ�����

	person p = do_work02();

	cout << "test03" << endl;
}

int main() {

	test01();//*ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���

	test02();//*ֵ���ݵķ�ʽ ������������ֵ

	test03(); //*ֵ��ʽ���ؾֲ�����

	system("pause");
	return 0;
}