//#include<iostream>
//#include<fstream>
//#include<string>
//
//using namespace std;
//
///*�������ļ�����  д�ļ�
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
//	* ��:ios::out|ios::binary
//	*	�����Ƶķ�ʽд���ļ�
//	
//*/
//
////������д
//class MyClass
//{
//public:
//
//	char m_name[50];
//	int m_age;
//private:
//
//};
//
//
//void test01() {
//
//	//1.���ͷ�ļ�
//
//	//2.����������
//	ofstream ofs("test01.txt", ios::out | ios::binary);
//
//	//3.���ļ� (·��,�򿪷�ʽ)
//	//ofs.open("test01.txt", ios::out|ios::binary);
//
//	//4.д����
//	MyClass p = { "����",33 };
//	ofs.write((const char*)&p, sizeof(p));
//	//write д
//	//read ��
// 
//	//&p������ MYCLASS������ �����������Ҫ����const char* 
//	//����Ҫǿת����
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
//	system("pause");
//	return 0;
//}