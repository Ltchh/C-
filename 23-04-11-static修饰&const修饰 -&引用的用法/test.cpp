#include<iostream>

using namespace std;

int& test01() {
	int a = 10;	//�ֲ���������������е� ->ջ��
	return a;
}

int& test02() {
	static int a = 10; //��̬���������ȫ����,ȫ���������ڳ��������ϵͳ�ͷ�
	return a;
}

void static_ () { //static���εľ�̬����
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

}

void print(const int& b) {//����const֮���Ϊֻ�� ,���������޸�

	//b =100; //���� const���κ���ֵ�������޸�
	cout << "b=" << b << endl;

}

void const_() {//const���εı���

	//��������

	//ʹ�ó���:���������β�,��ֹ�����

	int a = 10;

	//����const֮�� �������������޸�Ϊ: int temp=10,const int& ref=temp ;����(����)

	const int& ref = 10;

	//ref = 10;  //����const֮���Ϊֻ�� ,���������޸�

	int b = 100;

	print(b);//��ӡ

}

int main() {

	static_ (); //static���εľ�̬����

	const_();//const���εı���
	


	system("pause");

	return 0;
}