#define  _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

void my_go_over() {
	int i = 0;	//整形

	string ch = "hello word!"; //字符数组输入

	cout << "hello word\n" << endl;

	cin >> i;

	cin >> ch;

	cout << "i=" << i << endl;

	cout << "ch=" << ch << endl;//默认读取到空格后打印空格前的字符&常量
	system("pause");
}

void my_structure() {
	int i = 0;

	//if语句  选择结构
	if (i==0) {//truce 执行语句
	}
	else if (i < 0) {//truce 执行语句
	}
	else {	//flase 执行语句
	}

	//三目运算符
	int a = 0, b = 3, c = 4;
	int b = a > b ? c : a;//注解:a大于b大于的话是c不是的话是a
	(a < b ? c : b) = 100;//可以赋值操作

	//switch 多条件分支选择语句
	switch (b){
	case(1):cout << "hello word" << endl;
		break;
	default:
		break;
	}

	//while语句	 循环语句
	while (i ==0) {//条件成立循环不结束
		//需要在这里该变条件
	}

	//do...while循环 必须执行一次判断条件成立继续循环不才能退出
	do {

	} while (i < 0);

	//for循环语句
	for (int i = 100; i < 120; i++) {
		break;//直接跳出循环
		continue//执行本行,就不再执行下面的语句;后继续循环
	}


}

int main() {

	my_go_over();//复习
	
	my_structure();//结构
	return 0;
}