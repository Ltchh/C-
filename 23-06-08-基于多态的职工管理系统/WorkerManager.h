#pragma once		//��ֹͷ�ļ����ظ�����
#include<iostream>	//��������������� ͷ�ļ�
#include<fstream>	//�ļ�������дͷ�ļ�
#include<string>	//�ַ���ͷ�ļ�

#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"


using namespace std;	//ʹ�ñ�׼�����ռ�

class WorkerMager	//���ڶ�̬�Ĺ���ϵͳ����
{
public:				//����Ȩ��
	WorkerMager();	//���캯��
//��Ϊ
	void Show_Menu();//��Ա����

	void ExitSysterm();//��Ա����


	~WorkerMager();	//��������

public:
	int m_mpenumber;//��¼��Ա����

	//ְ������ָ��
	Worker** m_Emparray;

public:
	void Add_Emp();//�����Ա��Ϣ

private:			//˽��Ȩ��

};


