#include<iostream>
#include<string>

using namespace std;

/*�̳��еĶ����С
	*
	*
	*
*/

class MyClass
{
public://����Ȩ��
	int m_a;
protected://����Ȩ��
	int m_b;
private://˽��Ȩ��
	int m_c;
};

class son :MyClass {
public:
	int m_d;
};

void test01() {

	//16
	//�����е����зǾ�̬��Ա�����౻�̳�
	//����˽�г�Ա��������������,��Ϊ���ʲ���,����ȷʵ���̳���ȥ��
	cout << "sizeof son=" << sizeof(son) << endl;
}
int main() {

	test01();



	system("pause");
	return 0;
}