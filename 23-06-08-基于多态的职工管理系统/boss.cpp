#include"boss.h"

Boss::Boss(int id, string name, string number, string duty)//���캯��
{
	//thisָ������Լ�����ĳ�Ա���Ժʹ�������ֵ��Ϊһ������
	this->m_id = id;		//��������m_id��ʼ�� 
	this->m_name = name;	//��������m_name��ʼ�� 
	this->m_number = number;//��������m_number��ʼ��
	this->m_duty = duty;	//��������m_dutyc��ʼ��
}

//��Ϊ:
//��ʾ������Ϣ
void Boss::showInfo()//���麯��
{
	cout << "ְ�����:" << this->m_id <<
		"\t���ű��:" << this->m_number <<
		"\tְ������:" << this->m_name <<
		"\t��λ:" << this->getDeptName() <<
		"\t��λְ��:" << this->m_duty << endl;
}

//��ȡ��λ����
string Boss::getDeptName()//���麯��
{
	return string("BOSS");
	//return "Boss";
	//�������string ���ص�����ϵͳҲ��ǿ��ת��string����
}