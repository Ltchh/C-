#pragma once		//��ֹͷ�ļ����ظ�����
#include<iostream>	//��������������� ͷ�ļ�
#include<fstream>	//�ļ�������дͷ�ļ�
#include<string>	//�ַ���ͷ�ļ�

#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#define FILENAME "empfile.txt"//�곣��

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

	//�����ļ�
	void save();

	//�ж��ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;



public:
	void Add_Emp();//�����Ա��Ϣ
	
	int get_EmpNum();//ͳ���ļ��е�����

	void init_Emp();//��ʼ��Ա��

	void show_Emp();//��ʾ��Ա��Ϣ

	void delete_Emp();//ɾ��Ա��

	int lookup_Emp(int id);//����Ա����� �ҵ�����id �Ҳ�������-1

	void Mod_Emp();//�޸�Ա����Ϣ

	void Look_Emp();//����Ա����Ϣ

private:			//˽��Ȩ��

};


