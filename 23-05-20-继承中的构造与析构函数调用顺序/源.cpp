#include<iostream>
#include<string>

using namespace std;

/*	�̳ж����������������ĵ���˳��
	*
	*
	*
*/

class myclass {
public:
	myclass(){
		cout << "myclass���캯��" << endl;
	}
	~myclass() {
		cout << "myclass��������" << endl;
	}
	
};

class base:public myclass {
public:
	base() {
		cout << "mybace���캯��" << endl;
	}
	~base() {
		cout << "mybase��������" << endl;
	}
};
void test01() {
	myclass p1;
	// ����������
	
	base p2;
	//�ȸ��๹��->���๹��->��������->��������

	//�������һ��
	//��(��)�๹�� ->  (�̳�)���๹��->  ���๹��->
	//��������->       (�̳�)��������->  ��(��)������
}
int main() {

	test01();



	system("pause");
	return 0;
}