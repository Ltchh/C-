#include<iostream>
#include<string>

using namespace std;

/*	��������ص���
		* ǰ�� + +
			*ǰ��++���ر��� &����	 
		
		* ���� + +
			*����++����ֵ �൱���������� 
		
	*/

class MyClass
{
	friend ostream& operator<<(ostream& cout,const MyClass& p1);
public:
	MyClass() {
		M_nume = 0 ;
	}

	//*ǰ�� + +
	//	*ǰ��++���ر��� & ����
	MyClass& operator++() {
		M_nume++;
		return *this;
	}


	//���� ++ �����
	MyClass operator++(int) {// int��ʾռλ����,������������ǰ�õ����ͺ��õ���

		//�� ��¼��ʱ�Ľ��
		MyClass temp = *this;

		//�� ����
		M_nume++;

		//��� ����¼�Ľ������
		return temp;
	}
	
private:
	int M_nume;
};

//�������������ȫ�ֺ���
ostream& operator<<(ostream& cout,const MyClass& p1) {
	cout << p1.M_nume<<endl;
	return cout;
}


void test01() {
	MyClass p1;
	cout << p1 << endl;
	cout << ++p1 << endl;
}

void test02() {

	MyClass p1;

	cout << p1 << endl;
	cout << p1++ << endl;
	cout << p1 << endl;
}

int main() {

	test01();
	test02();

	system("pause");
	return 0;
}