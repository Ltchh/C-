#include<iostream>
#include<string>

using namespace std;
/*
		��Ա����˽�л�

		*�����г�Ա��������Ϊ˽�л�  ,�����Լ����ƶ�дȨ��
		* ��д��Ȩ��,���ǿ����Լ������ݵ���Ч��

*/



//�˵���
class Person {

public://����Ȩ��

	//��������Ȩ��
	void setname(string& na) {	//д
		name = na;
	}
	string getname() {	//��
		return name;
	}

	//��������Ȩ��
	void setsge(int& ag) { //ֻд //���ɶ�
		if (ag < 0 || ag>100) {
			cout << "�������" << endl;
			return;
		}
		age = ag;
	}

	//�����Ա�Ȩ��
	string getsex() {		//ֻ��
		return sex;
	}
	
private: //�����еĳ�Ա����˽�л�
	//����---�ɶ� ��д
	string name;

	//����---ֻд
	int age=0;

	//�Ա�---ֻ��
	string sex;

};

int main() {

	Person pe_x;
	string name;

	cin >> name;
	pe_x.setname(name);


	system("puase");
	return 0;
}