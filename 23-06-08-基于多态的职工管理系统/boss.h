#pragma once		//��ֹͷ�ļ����ظ�����
#include"worker.h"

//boss��

class Boss :public Worker
{
public:

	Boss(int id, string name, string number, string duty);//���캯��
	//��Ϊ:
	//��ʾ������Ϣ
	virtual void showInfo();//���麯��

	//��ȡ��λ����
	virtual string getDeptName();//���麯��


private:

};