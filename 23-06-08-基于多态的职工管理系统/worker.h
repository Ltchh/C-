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
	//��ʾ������Ϣ
	virtual void showInfo() = 0;//���麯��

	//��ȡ��λ����
	virtual string getDeptName() = 0;//���麯��


//����:
	//ְ���ı��
	int m_id;

	//ְ������
	string m_name;

	//���ű��
	int m_number;

	//��λְ��
	string m_duty;

private:

};
