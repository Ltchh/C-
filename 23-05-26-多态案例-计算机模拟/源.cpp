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
			cout << "输入错误\t请重写输入" << endl;
		}
	}

public:
	int m_nume1;//操作数1
	int m_nume2;//操作数2

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
//多态实现计算机

//实现计算器抽象类


class AdstractCalculator
{
public:
	
	virtual int getResult() = 0;//纯虚函数 - 当一个类中有纯虚函数这个类也称为抽象类

	/*virtual int getResult() {
		return 0;
	}*/

	int num_m_1;
	int num_m_2;
private:

};

class addCalculator:public AdstractCalculator //多态重载继承
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
	//多态使用条件
	//父类指针或引用指向子类对象
	// 
	//+法
	AdstractCalculator* add = new addCalculator;
	add->num_m_1 = 10;
	add->num_m_2 = 5;
	cout << add->num_m_1 << "+" << add->num_m_2 <<"=" << add->getResult() << endl;
	delete add;

	//-法
	AdstractCalculator* sub = new subCalculator;
	sub->num_m_1 = 10;
	sub->num_m_2 = 5;
	cout << sub->num_m_1 << "+" << sub->num_m_2 << "="<<sub->getResult() << endl;
	delete sub;

	//*法
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