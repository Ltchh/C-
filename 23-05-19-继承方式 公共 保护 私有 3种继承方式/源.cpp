#include<iostream>
#include<string>

using namespace std;

/*	继承有三种继承方式
	*	公共继承:(public)
	*		可以访问:公共权限 保护权限 不可访问私有权限
	*	
	*	保护继承:(protected)
	*		可以访问:公共权限 保护权限  不可访问私有权限  (继承后全部属性变成保护权限)
	*
	*	私有继承:(private)
	*		可以访问:公共权限 保护权限 不可访问私有权限    (继承后全部属性编程私有权限) 
*/


class Base01 //父类->基类   (由父衍生出来的)->(基础的类) 
{
public://私有权限
	int M_a;

protected://保护权限
	int M_b;

private://公共权限
	int M_c;

};

class  Soon1:public Base01  //公共权限继承  内外只能访问公共权限的属性
{
public:
	void fun() {
		M_a = 10;//父类中的公共权限成员 到子类中依然是公共权限
		M_b = 11;//父类中的保护成员		到子类中依然是保护权限
		//M_c = 12;//父类中的私有权限		到子类中不可以访问
	}
private:

};

class Base02 //父类->基类   (由父衍生出来的)->(基础的类)
{
public://私有权限
	int M_a;

protected://保护权限
	int M_b;

private://公共权限
	int M_c; 

};

class son2 :protected Base02 { //保护权限继承->内外都不可以访问
public:
	void fun() {
		M_a = 10;//父类中的公共权限成员 到子类中是保护权限
		M_b = 11;//父类中的保护成员		到子类中依然是保护权限
		//M_c = 12;//父类中的私有权限	到子类中不可以访问
	}

};

class Base03 //父类->基类   (由父衍生出来的)->(基础的类)
{
public://私有权限
	int M_a;

protected://保护权限
	int M_b;

private://公共权限
	int M_c;

};

class son3:private Base03{  //公共权限继承->类外都不可以访问
public:
	void fun() {
		M_a = 10;//父类中的公共权限成员 到子类中是私有权限
		M_b = 11;//父类中的保护成员		到子类中是私有权限
		//M_c = 12;//父类中的私有权限	到子类中不可以访问
	}

private:

};




int main() {





	system("pause");
	return 0;
}