#include"manager.h"

Manager::Manager(int id, string name, string number, string duty)//���캯��
{
	//thisָ������Լ�����ĳ�Ա���Ժʹ�������ֵ��Ϊһ������
	this->m_id = id;		//��������m_id��ʼ�� 
	this->m_name = name;	//��������m_name��ʼ�� 
	this->m_number = number;//��������m_number��ʼ��
	this->m_duty = duty;	//��������m_dutyc��ʼ��
}

//��Ϊ:
//��ʾ������Ϣ
void Manager::showInfo()//���麯��
{
	cout << "ְ�����:" << this->m_id <<
		"\t���ű��:" << this->m_number <<
		"\tְ������:" << this->m_name <<
		"\t��λ:" << this->getDeptName() <<
		"\t��λְ��:" << this->m_duty << endl;
}

//��ȡ��λ����
string Manager::getDeptName()//���麯��
{
	return string("����");
	//return "Ա��";
	//�������string ���ص�����ϵͳҲ��ǿ��ת��string����
}