#include<iostream>
#include<string>

using namespace std;

/*���μ̳�
	*			����
	*		��		  ����
	*			 ����
	* 
	* �����ظ��̳��˶���������������
	*
	*��̳п��Խ�����μ̳�����
	* �ڼ̳�֮ǰ���� virtual ��Ϊ��̳�
	* animal���Ϊ �����
*/

//������
 class animal {

public:
	int m_age;

};

//����
class sheep:virtual public animal {

};

//������
class tuo:virtual public animal{

};

//������
class sheep_tuo :public sheep,public tuo {

};

void test01() {
	sheep_tuo p1;

	p1.sheep::m_age = 10;
	p1.tuo::m_age = 28;

	//���������μ̳е�ʱ�� ,������������ͬ������,��Ҫ����������
	cout << "p1.sheep::m_age =" << p1.sheep::m_age << endl;
	cout << "p1.tuo::m_age =" << p1.tuo::m_age << endl;

	cout << "p1.m_age" << p1.m_age << endl;

	//�������ֻҪһ�����ݾͿ�����,���μ̳��������������,�������Դ�˷�

}

int main() {


	test01();


	system("pause");
	return 0;
}