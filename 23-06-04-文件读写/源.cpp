//#include<iostream>
//#include<fstream>//�ļ�����ͷ�ļ�
//#include<string>
//
//using namespace std;
//
///*�ļ�����
//	* ͷ�ļ� <fstream>
//	*
//	* 1.�ı��ļ�: �ļ���ASCLL����ʽ�洢�ڼ����
//	* 2.�������ļ�:�ļ��Զ����Ƶķ�ʽ�洢�ڼ������
//	* 
//	* �����ļ���������:
//	* 1.ofstream:  (open file stream) д����
//	* 2.ifstream:  (input stream ) ������
//	* 3.fstream:   (file stream  )��д����
//	* 
//	* �򿪷�ʽ:
//	* 1.ios::in Ϊ���ļ������ļ�
//	* 2.ios::out Ϊд�ļ������ļ�
//	* 3.ios::ate ��ʼλ��:�ļ�β  (׷��)
//	* 4.ios::app	׷�ӵķ�ʽд�ļ�
//	* 5.ios::trunc	����ļ�������ɾ��,�ڴ���
//	* 6.ios::binary	�������Ʒ�ʽ
//	* 
//	* д�ļ�:
//	* 1.����ͷ�ļ�
//	*		#include<stream>
//	* 2.����������
//	*		ofstream ofs;
//	* 3.���ļ�:
//	*		ofs.open("�ļ�·��",�򿪷�ʽ);
//	* 4.д����
//	*		ofs<<""д������";
//	* 5.�ر��ļ�
//	*		ofs.close();
//	* 
//	* ע��:
//	*	�ļ��򿪷�ʽ�������ʹ�� ,���� "|"������
//	* ��:�ö����Ƶķ�ʽд�ļ�
//	*	ios::binary | ios::out; 
//*/	
//
////�ļ�д
//
//void test01() {
//	//1.����ͷ�ļ�	#include<fstream>
//
//	//2.����������
//	ofstream ofs;  //�൱�ڴ���һ������
//	//fstream	ofs1;	//��д����
//
//	//3.���ļ�
//	ofs.open("test01.txt", ios::out);
//	//			���·��   �򿪷�ʽ
//
//	//4.��/д����
//	ofs << "����:�߹��ɽ��" << endl;
//	ofs << "����:33" << endl;
//
//	//5.�ر��ļ�
//	ofs.close();
//}
//
//int main() {
//	
//	test01();
//
//
//
//
//	system("pause");
//	return 0;
//}