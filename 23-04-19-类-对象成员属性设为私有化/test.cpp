#include<iostream>
#include<string>

using namespace std;
/*
		成员属性私有化

		*将所有成员属性设置为私有化  ,可以自己控制读写权限
		* 对写的权限,我们可以以检验数据的有效性

*/



//人的类
class Person {

public://公共权限

	//姓名设置权限
	void setname(string& na) {	//写
		name = na;
	}
	string getname() {	//读
		return name;
	}

	//设置年龄权限
	void setsge(int& ag) { //只写 //不可读
		if (ag < 0 || ag>100) {
			cout << "输入错误" << endl;
			return;
		}
		age = ag;
	}

	//设置性别权限
	string getsex() {		//只读
		return sex;
	}
	
private: //将所有的成员属性私有化
	//姓名---可读 可写
	string name;

	//年龄---只写
	int age=0;

	//性别---只读
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