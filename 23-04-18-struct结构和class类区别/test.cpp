#include<iostream>
#include<string>

using namespace std;

class c1 {
	int m_1;//Ĭ��˽��Ȩ��
};

typedef struct c2 {
	int m_2;//Ĭ�Ϲ���Ȩ��
};

int main() {


	/*struct�ṹ��class�������:
			*struct Ĭ��Ȩ�� ��public->����Ȩ��
			*class  Ĭ��Ȩ�� ��private->˽��Ȩ��*/
	c1 aa;
	c2 bb;

	cin >> aa.m_1;//˽��Ȩ�� ���ⲻ���Է���

	cin >> bb.m_2;//����Ȩ�� ������Է���
	
	system("pause");
	return 0;
}