#define  _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

//宏常量
#define NAME 30 //define定义宏常量 30 是把变量定义为常量

//标识符
//1.标识符不可以是关键字
//2.标识符是由字母,数字,下划线
//3.标识符第一个字符必须是字母或者下划线
//4.标识符是区分大小写

void charprint() {
	//C风格
	char arr[] = "hellow word";

	//c++风格
	string str = "hellow word";
	cout << "arr[]=" << arr << endl;
	cout << "str=" << str << endl;
}

//bool值 真=>非零数; 假=>零
void boolvalue() {
	bool value_1= true;//真1
	bool value_2 = false;//假0
	cout<<"value_1="<<sizeof(value_1)<<"\nvalue_2="<< sizeof(value_2) <<endl;
}


void input() {
	//1.整形
	int a = 0;
	cout << "请输入整形:>"<<endl;
	cin >> a;
	cout << "a=" << a << endl;

	//2.字符
	char ch = 'C';
	cout << "请输入字符:>" << endl;
	cin >> ch;
	cout << "ch=" << ch << endl;

	//3.浮点型
	double dou = 0.0;
	cout << "请输入浮点型:>" << endl;
	cin >> dou;
	cout << "dou=" << dou << endl;

	//4.字符串
	string arr = "hello word";
	cout << "请输入字符串:>" << endl;
	cin >> arr;
	cout << "arr=" << arr << endl;

	//5.布尔
	bool flag = false;
	cout << "请输入\n(1-false)\n(0-true):>" << endl;
	cin >> flag;
	cout << "flag=" << flag << endl;

}

int main() {

	int a = 10; 

	//const修饰的的变量不可以修改
	const int b = 10;//const修饰过的变量不可以修改
	
	cout << "hellow word" << endl;
	cout << "a=" << a << endl;//"a="是打印内容; a变量名


	//字符串输出打印
	//charprint();

	//bool 布尔值
	//boolvalue();

	//输入
	input();

	//逻辑运算
	// !	非	  !a    如果a为假 则a为真 则!a为假
	// &&   并且  a&&b	a,b都为真 结果为真 其中一个为假则结果为假 
	// (同真为真,其余都为假)
	// 
	// ||   或	  a||b	a,b其中又一个为真 结果为真 两个都为假结果为假
	// (同假为假,其余都为真)
	system("pause");
	return 0;
}