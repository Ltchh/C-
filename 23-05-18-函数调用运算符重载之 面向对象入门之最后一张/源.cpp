#include<iostream>
#include<string>

using namespace std;

/*	�����������������
	*�������������()Ҳ��������
	*	�������غ�ʹ�÷�ʽ�ǳ��뺯���ĵ���,��˳�Ϊ�º���
	* �º���û�й̶���д�� ,�ǳ����
	* 
*/
class MyClass
{
public:

	void operator()(int test01) {	//��ӡ��������
		cout << test01 << endl;
	}
	
	int operator()(int a, int b) {	//���㺯������
		return a + b;
	}

private:

};

void test01() {

	MyClass P1;
	P1(1);//����ʹ�������ǳ������ں�������,��˳�Ϊ�º���
	int ret=P1(15, 20);
	P1(ret);

	//������������ myclass()->��������
	cout << MyClass()(13,1) << endl; 
	}
int main() {


	test01();


	system("pause");
	return 0;
}