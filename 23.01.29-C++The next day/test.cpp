#define  _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

void my_go_over() {
	int i = 0;	//����

	string ch = "hello word!"; //�ַ���������

	cout << "hello word\n" << endl;

	cin >> i;

	cin >> ch;

	cout << "i=" << i << endl;

	cout << "ch=" << ch << endl;//Ĭ�϶�ȡ���ո���ӡ�ո�ǰ���ַ�&����
	system("pause");
}

void my_structure() {
	int i = 0;

	//if���  ѡ��ṹ
	if (i==0) {//truce ִ�����
	}
	else if (i < 0) {//truce ִ�����
	}
	else {	//flase ִ�����
	}

	//��Ŀ�����
	int a = 0, b = 3, c = 4;
	int b = a > b ? c : a;//ע��:a����b���ڵĻ���c���ǵĻ���a
	(a < b ? c : b) = 100;//���Ը�ֵ����

	//switch ��������֧ѡ�����
	switch (b){
	case(1):cout << "hello word" << endl;
		break;
	default:
		break;
	}

	//while���	 ѭ�����
	while (i ==0) {//��������ѭ��������
		//��Ҫ������ñ�����
	}

	//do...whileѭ�� ����ִ��һ���ж�������������ѭ���������˳�
	do {

	} while (i < 0);

	//forѭ�����
	for (int i = 100; i < 120; i++) {
		break;//ֱ������ѭ��
		continue//ִ�б���,�Ͳ���ִ����������;�����ѭ��
	}


}

int main() {

	my_go_over();//��ϰ
	
	my_structure();//�ṹ
	return 0;
}