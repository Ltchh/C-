#pragma once		//��ֹͷ�ļ����ظ�����
#include"worker.h"



//��ͨԱ����

class Employee:public Worker
{
public:

	Employee(int id, string name, int number,string duty);//���캯��
	//��Ϊ:
	//��ʾ������Ϣ
	virtual void showInfo();//���麯��

	//��ȡ��λ����
	virtual string getDeptName();//���麯��


private:

};


