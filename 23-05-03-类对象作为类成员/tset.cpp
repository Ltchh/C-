#include<iostream>
#include<string>

using namespace std;


/*
	�������Ϊ���Ա
		*
		* �������������Ϊ���Ա,����ʱ���ȹ��������,�ڹ�������
		* 
		* ��������������Ȼ�������������

*/

class phone {

public:

	phone(string name);

	~phone();

	string my_name_phone;
private:
};

phone::phone(string name):my_name_phone(name){

	cout << "ph���캯��" << endl;
}

phone::~phone() {
	cout << "ph��������" << endl;

}


class person//����
{
public:
	person(string name,string name_phone);

	~person();
	
	string Per_name;//����
	phone Phon_name;//�ֻ�Ʒ��    ****ע��***(phone ��)
private:

};

person::person(string name,string name_phone):Per_name(name),Phon_name(name_phone)	//***ע��*** 
		//phone phone_name =name_phone (��ʽת����)

{
	cout << "My���캯��" << endl;
}

person::~person()
{
	cout << "My��������" << endl;
}

void test01() {

	string name;
	string name_phone;
	cin >> name >> name_phone;

	person P(name,name_phone);
	
	cout << P.Per_name << "����" << P.Phon_name.my_name_phone << "�ֻ�"<<endl;


}

int main() {

	test01();

	system("pause");
	return 0;
}