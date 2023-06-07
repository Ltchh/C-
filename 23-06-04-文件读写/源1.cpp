#include<iostream>
#include<fstream>//�ļ�����ͷ�ļ�
#include<string>

using namespace std;

/*�ļ�����
	* ͷ�ļ� <fstream>
	*
	* 1.�ı��ļ�: �ļ���ASCLL����ʽ�洢�ڼ����
	* 2.�������ļ�:�ļ��Զ����Ƶķ�ʽ�洢�ڼ������
	*
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
	* д�ļ�:
	* 1.����ͷ�ļ�
	*		#include<stream>
	* 2.����������
	*		ifstream ifs;
	* 3.���ļ�:
	*		ifs.open("�ļ�·��",�򿪷�ʽ);
	* 4.������(4��)
	*		ifs<<""д������";
	* 5.�ر��ļ�
	*		ifs.close();
	*
	* ע��:
	*	�ļ��򿪷�ʽ�������ʹ�� ,���� "|"������
	* ��:�ö����Ƶķ�ʽд�ļ�
	*	ios::binary | ios::out;
*/

//�ļ��Ķ�
void test01() {

	//1.����ͷ�ļ�

	//2.����������
	ifstream ifs;

	//3.���ļ�,�����ж��Ƿ�ɹ�
	ifs.open("test01.txt", ios::in);
	if (!ifs.is_open()) {
		//ifs.is_open���ص���һ������ֵ
		//�򿪳ɹ�Ϊ�� true	1
		//��ʧ��Ϊ�� false	0

		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4.������(4�ֶ�ȡ����)
		//��һ��:(�Ƽ���һ��)
	//char buf[1024] = { 0 };
	//while (ifs>>buf)
	//{
	//	cout << buf << endl;
	//}
	//cout << endl;

		//�ڶ���:
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//	//	   ����ĵ�ַ  ,��ȡ�����ֽ�
	//{
	//	cout << buf << endl;
	//}
	 
		//������ (�Ƽ���һ��)
	//string buf;
	//while (getline(ifs,buf))
	//
	////			������ ����ĵ�ַ
	//{
	//	cout << buf << endl;
	//}

		//������: (���Ƽ���һ��)
	char ch;
	while ((ch = ifs.get())!=EOF)//EOF->end of file  �Ƿ����ļ���β
		//	��ȡһ��һ���ַ��ж�ʯ��ĩβ
	{
		cout << ch;
	}
	
	//5.�ر��ļ�
	ifs.close();
}

int main() {

	test01();



	system("pause");
	return 0;
}