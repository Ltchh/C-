#include <string>
#include <iostream>

using namespace std;

//���� ��һ��������һ������ "&"

void reference() {//����

	int a = 15;

	int& b = a; //��int a������һ��b�ı���;

<<<<<<< HEAD
=======
	// int* cont b=&a;

>>>>>>> 8161cba (添加)
	/*ע�� ==> >
		1.���ñ����ʼ��
			int &b ; ����

		2.����һ����ʼ����,�������ڶ������и���
			int c=20;
				b=c ;	����
				b=c;	�Ǹ�ֵ����
	*/

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	cout << "���a��ֵ";
	cin >> a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	cout << "���b��ֵ";
	cin >> b;
	cout << "a=" << b << endl;
	cout << "b=" << b << endl;
}

void myswap(int &a, int &b) {  // ����  ---&a��a�ı���; &b��b�ı��� ֻ��ȡ��������ͬ
	int temp = a;
	a = b;
	b = temp;
}


<<<<<<< HEAD
int& test01() {
	int a = 10;	//�ֲ���������������е� ->ջ��
	return a;
}

int& test02() {
	static int a = 10; //��̬���������ȫ����,ȫ���������ڳ��������ϵͳ�ͷ�
	return a;
}
=======

>>>>>>> 8161cba (添加)

int main() {

	int a = 2;
	int b = 5;

	//reference();//����

	/*1.ֵ���ݽ���
			ֵ����,�ββ�������ʵ��
	*/

	/*2.��ַ���ݽ���
			��ַ����,�βλ�����ʵ��
	*/

	/*3.���ô��ݽ���
			���ô���,�βλ�����ʵ��	 
	*/

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	myswap(a, b);//����

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

<<<<<<< HEAD
	//�����������ķ���ֵ
		//1.��Ҫ���ؾֲ�����������
	//int& ref = test01();  //��������a Ȼ���aȡ��һ��test01()�ı���;
	//cout << "ref=" << ref << endl;//���Ǵ�����÷� ��һ�ε��ñ����������ݴ���һ��
	//cout << "ref=" << ref << endl;//���Ǵ�����÷��ڶ��ε��þ��޷����ûᷢ������
		
		//2.�����ĵ��ÿ�����Ϊ��ֵ

	int& ref_02 = test02(); //red_02��test02�ı���
	cout << "ref_02=" << ref_02 << endl;
	cout << "ref_02=" << ref_02 << endl;

	test02() = 100;
	//��������ķ���ֵ������,�⺯�����ÿ�����Ϊ��ֵ
	cout << "ref_02=" << ref_02 << endl;
	cout << "ref_02=" << ref_02 << endl;

	//��������a Ȼ���aȡ��һ��test02()�ı���;
=======

>>>>>>> 8161cba (添加)

	system("pause");//��ͣ system ϵͳ����
	return 0;
}
