#include<iostream>
#include<string>

using namespace std;

//空类的空间为1
//有整形数据空间为4是指针的大小空间

/*	多态:
	*	静态多态:函数重载 运算符重载属于静态多态,复用函数名
	*	动态多态:派生类和虚函数实现运行时多态
	区别:
	*静态多态的函数地址早绑定 - 编译阶段确定函数地址
	*动态多态的函数地址晚绑定 - 运行阶段确定函数地址
*/


/*
* 动态多态满足条件:
*	 1.有继承关系
*	 2.子类重写父类的虚函数
* 
* 动态多态使用:
*	1.父类的指针或引用 执行子类对象
* 
* 
*/

//动物类
class animal {
	public:
	 virtual void speak() { //virtual - 虚函数关键字  -- 虚函数
			cout << "动物在说话" << endl;
	 }
};


//猫类
//重写: 函数返回值类型 函数名 参数列表 完全相同
class cat:public animal {
public:
	void speak() {
		cout << "小猫在叫" << endl;
	}
};

//狗类
//重写: 函数返回值类型 函数名 参数列表 完全相同
class dog :public animal{
	void speak() {
		cout << "小狗在叫" << endl;
	}
};

void dospeak(animal & ani) {
	ani.speak();
}

void test01() {

	cat cat_1;
	dospeak(cat_1);

	dog dog_1;
	dospeak(dog_1);
}

int main() {


	test01();


	system("pause");
	return 0;
}