#pragma once		//��ֹͷ�ļ����ظ�����
#include<iostream>	//��������������� ͷ�ļ�
#include<fstream>	//�ļ�������дͷ�ļ�
#include<string>	//�ַ���ͷ�ļ�

using namespace std;	//ʹ�ñ�׼�����ռ�

//ְ��������	����д��麯�� �������ǳ�����
class Worker
{
public:
//��Ϊ:
	
	virtual void showInfo() = 0;//���麯��//��ʾ������Ϣ

	
	virtual string getDeptName() = 0;//���麯��//��ȡ��λ����


//����:
	
	int m_id;//ְ���ı��

	
	string m_name;//ְ������

	
	string m_number;//���ű��

	
	string m_duty;//��λְ��

private:

};
