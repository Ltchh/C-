#include<iostream>
#include<string>

using namespace std;

/*
	*
	*
	*
*/

class calcula
{
public:
	int getresult(string oper) {
		if (oper=="+"){
			return m_nume1 + m_nume2;
		}
		else if(oper=="-") {
			return m_nume1 - m_nume2;
		}
		else if (oper=="*") {
			return m_nume1 * m_nume2;
		}
		else if(oper=="/"){
			return m_nume1 / m_nume2;
		}
		else{
			cout << "�������\t����д����" << endl;
		}
	}

public:
	int m_nume1;//������1
	int m_nume2;//������2

private:

};

void test01() {
	calcula num;
	num.m_nume1 = 2;
	num.m_nume2 = 4;

	cout << num.m_nume1 << "+" << num.m_nume2 << "=" << num.getresult("+") << endl;
	cout << num.m_nume1 << "-" << num.m_nume2 << "=" << num.getresult("-") << endl;
	cout << num.m_nume1 << "*" << num.m_nume2 << "=" << num.getresult("*") << endl;
	cout << num.m_nume1 << "/" << num.m_nume2 << "=" << num.getresult("/") << endl;
}
//��̬ʵ�ּ����

//ʵ�ּ�����������


class AdstractCalculator
{
public:
	
	virtual int getResult() = 0;//���麯�� - ��һ�������д��麯�������Ҳ��Ϊ������

	/*virtual int getResult() {
		return 0;
	}*/

	int num_m_1;
	int num_m_2;
private:

};

class addCalculator:public AdstractCalculator //��̬���ؼ̳�
{
public:
	int getResult() {
		return num_m_1 + num_m_2;
	}
private:

};

class  subCalculator :public AdstractCalculator
{
public:
	int getResult() {
		return num_m_1 - num_m_2;
	}
private:

};

class  mulCalculator :public AdstractCalculator
{
public:
	int getResult() {
		return num_m_1 * num_m_2;
	}
private:

};

void test02() {
	//��̬ʹ������
	//����ָ�������ָ���������
	// 
	//+��
	AdstractCalculator* add = new addCalculator;
	add->num_m_1 = 10;
	add->num_m_2 = 5;
	cout << add->num_m_1 << "+" << add->num_m_2 <<"=" << add->getResult() << endl;
	delete add;

	//-��
	AdstractCalculator* sub = new subCalculator;
	sub->num_m_1 = 10;
	sub->num_m_2 = 5;
	cout << sub->num_m_1 << "+" << sub->num_m_2 << "="<<sub->getResult() << endl;
	delete sub;

	//*��
	AdstractCalculator* mul = new mulCalculator;
	mul->num_m_1 = 15;
	mul->num_m_2 = 16;
	cout << mul->num_m_1 << "*" << mul->num_m_2 << "="<<mul->getResult() << endl;
	delete mul;
}

int main() {

	test01();

	test02();

	system("pause");
	return 0;
}