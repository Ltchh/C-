#include<iostream>
#include<string>

using namespace std;

/* �̳� ֮ ��һ��
	*  ������֮����������ϵ
	* *�����ظ��Ĵ���
	*�̳еĻ����﷨
	* class ���� : �̳з�ʽ  ����
	* ��:
	* class A    : public	 B
	*  (A)��Ϊ����:Ҳ����������
	*  (B)��Ϊ����:Ҳ��������
	* 
	* �������еĳ�Ա,�������󲿷�
	*	һ���Ǵӻ���̳й���,һ�����Լ����ӵĳ�Ա
	*	�ӻ���̳й����ı����乲��,�������ӵĳ�Ա�����������
	

*/


//��վ�Ĵ����ʽ
//class java
//{
//public:
//	void header() {  //ͷ��
//		cout << "��ҳ, ������ ,��¼....(����ͷ��)" << endl;
//	}
//
//	void footer() {//������
//		cout << "��������,��������,վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//
//	void left() {//����
//		cout << "java ,c,c++...(�����б�)"<<endl;
//	}
//
//	void content() {
//		cout << "java��ѧ��Ƶ(���е�)" << endl;
//	}
//
//private:
//
//};

//�̳�ʵ��ҳ��

	//����һ�������������̳�
class basepage
{
public:
	void header() {  //ͷ��
		cout << "1.��ҳ, ������ ,��¼....(����ͷ��)" << endl;
	}

	void footer() {//������
		cout << "2.��������,��������,վ�ڵ�ͼ...(�����ײ�)" << endl;
	}

	void left() {//����
		cout << "3.java ,c,c++...(�����б�)" << endl;
	}
private:
};

//Javaҳ��
class Java:public basepage//�̳�basepage����Ȩ������
{
public:
	void content() {//(���е�����)
		cout << "(*).Java��ѧ��Ƶ(���е�)" << endl;
	}

private:

};

//cҳ��
class C:public basepage//�̳й���Ȩ������
{
public:
	void content() {//(���е�����)
		cout << "(*).C��ѧ��Ƶ(���е�)" << endl;
	}

private:

};

//c++ҳ��
class Cpp :public basepage//�̳й���Ȩ������
{
public:
	void content() {//(���е�����)
		cout << "(*).Cpp��ѧ��Ƶ(���е�)" << endl;
	}

private:

};

int main() {

	Java Ja;
	Ja.header();
	Ja.footer();
	Ja.left();
	Ja.content();
	cout << "---------------" << endl<<endl;

	C c;
	c.header();
	c.footer();
	c.left();
	c.content();
	cout << "---------------" << endl<<endl;

	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
	cout << "---------------" << endl<<endl;


	system("pause");
	return 0;
}