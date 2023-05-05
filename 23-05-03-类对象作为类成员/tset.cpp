#include<iostream>
#include<string>

using namespace std;


/*
	类对象作为类成员
		*
		* 当其他类对象作为类成员,构造时候先构造类对象,在构造自身
		* 
		* 析构先析构自身然后在析构类对象

*/

class phone {

public:

	phone(string name);

	~phone();

	string my_name_phone;
private:
};

phone::phone(string name):my_name_phone(name){

	cout << "ph构造函数" << endl;
}

phone::~phone() {
	cout << "ph析构函数" << endl;

}


class person//人类
{
public:
	person(string name,string name_phone);

	~person();
	
	string Per_name;//人名
	phone Phon_name;//手机品牌    ****注意***(phone 类)
private:

};

person::person(string name,string name_phone):Per_name(name),Phon_name(name_phone)	//***注意*** 
		//phone phone_name =name_phone (隐式转化法)

{
	cout << "My构造函数" << endl;
}

person::~person()
{
	cout << "My析构函数" << endl;
}

void test01() {

	string name;
	string name_phone;
	cin >> name >> name_phone;

	person P(name,name_phone);
	
	cout << P.Per_name << "拿着" << P.Phon_name.my_name_phone << "手机"<<endl;


}

int main() {

	test01();

	system("pause");
	return 0;
}