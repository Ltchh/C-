#define  _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

//�곣��
#define NAME 30 //define����곣�� 30 �ǰѱ�������Ϊ����

//��ʶ��
//1.��ʶ���������ǹؼ���
//2.��ʶ��������ĸ,����,�»���
//3.��ʶ����һ���ַ���������ĸ�����»���
//4.��ʶ�������ִ�Сд

void charprint() {
	//C���
	char arr[] = "hellow word";

	//c++���
	string str = "hellow word";
	cout << "arr[]=" << arr << endl;
	cout << "str=" << str << endl;
}

//boolֵ ��=>������; ��=>��
void boolvalue() {
	bool value_1= true;//��1
	bool value_2 = false;//��0
	cout<<"value_1="<<sizeof(value_1)<<"\nvalue_2="<< sizeof(value_2) <<endl;
}


void input() {
	//1.����
	int a = 0;
	cout << "����������:>"<<endl;
	cin >> a;
	cout << "a=" << a << endl;

	//2.�ַ�
	char ch = 'C';
	cout << "�������ַ�:>" << endl;
	cin >> ch;
	cout << "ch=" << ch << endl;

	//3.������
	double dou = 0.0;
	cout << "�����븡����:>" << endl;
	cin >> dou;
	cout << "dou=" << dou << endl;

	//4.�ַ���
	string arr = "hello word";
	cout << "�������ַ���:>" << endl;
	cin >> arr;
	cout << "arr=" << arr << endl;

	//5.����
	bool flag = false;
	cout << "������\n(1-false)\n(0-true):>" << endl;
	cin >> flag;
	cout << "flag=" << flag << endl;

}

int main() {

	int a = 10; 

	//const���εĵı����������޸�
	const int b = 10;//const���ι��ı����������޸�
	
	cout << "hellow word" << endl;
	cout << "a=" << a << endl;//"a="�Ǵ�ӡ����; a������


	//�ַ��������ӡ
	//charprint();

	//bool ����ֵ
	//boolvalue();

	//����
	input();

	//�߼�����
	// !	��	  !a    ���aΪ�� ��aΪ�� ��!aΪ��
	// &&   ����  a&&b	a,b��Ϊ�� ���Ϊ�� ����һ��Ϊ������Ϊ�� 
	// (ͬ��Ϊ��,���඼Ϊ��)
	// 
	// ||   ��	  a||b	a,b������һ��Ϊ�� ���Ϊ�� ������Ϊ�ٽ��Ϊ��
	// (ͬ��Ϊ��,���඼Ϊ��)
	system("pause");
	return 0;
}