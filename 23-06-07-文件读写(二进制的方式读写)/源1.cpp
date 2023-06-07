#include<iostream>
#include<fstream>
#include<string>

using namespace std;

/*
	�����ļ�����  ���ļ�
	* �����ļ���������:
	* 1.ofstream:  (open file stream) д����
	* 2.ifstream:  (input stream ) ������
	* 3.fstream:   (file stream  )��д����
	*
	* �򿪷�ʽ:
	* 1.ios::in Ϊ���ļ������ļ�
	* 2.ios::out Ϊд�ļ������ļ�
	* 3.ios::ate ��ʼλ��:�ļ�β  (׷��)
	* 4.ios::app	׷�ӵķ�ʽд�ļ�
	* 5.ios::trunc	����ļ�������ɾ��,�ڴ���
	* 6.ios::binary	�������Ʒ�ʽ
	* 
	* ��:ios::in|ios::binary
	*	�����Ƶķ�ʽ���ļ�
*/


//������ ���ļ�

class MyClass
{
public:

	char m_name[50];
	int m_age;
private:

};
void test01() {

	//���ͷ�ļ�

	//�����ļ�������
	ifstream ifs;
	//���ļ�(�ļ�·��, �򿪷�ʽ)
	ifs.open("test01.txt", ios::in | ios::binary);
		//�ж��Ƿ�򿪳ɹ�
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//��ȡ�ļ�
	MyClass p;
	ifs.read((char*)&p, sizeof(p));
	//read  ��
	//write д

	cout << "����:" << p.m_name << endl;
	cout<< "����:" << p.m_age << endl;

	//�ر��ļ�
	ifs.close();
 }
int main() {

	test01();

	system("pause");
	return 0;
}