#include<iostream>
#include<string>

using namespace std;

/*案例描述:(咖啡 and 茶叶)
	*制作饮品的流程:
	*				煮水 -> 冲泡 -> 倒入杯中 -> 加入辅料
	* 
	*利用多态技巧实现本案例,提供抽象制作饮品基类,提供子类制作茶叶和咖啡
	*
*/

class MakeDrink
	//当一个类里有纯虚函数 这个类也叫做抽象类
	//虚类不可以实例化
	//抽象类的子类必须重写父类(基类)的虚函数,否则这个子函数也是抽象类
{
public:

	//下面4条就是纯虚函数
	virtual void Boil_Water() = 0;//煮水函数
	virtual void Brewing() = 0;//冲泡函数
	virtual void Pour_into_a_cup() = 0;//倒入杯中函数
	virtual void Seasoning() = 0;//计入辅料函数

	//制作饮品
	void make_woek() {
		Boil_Water();
		Brewing();
		Pour_into_a_cup();
		Seasoning();
	}
};

//制作茶叶类
class Brewed_tea:public MakeDrink
{
public:
	virtual void Boil_Water() {//煮水函数
		cout << "烧开水" << endl;
	}
	virtual void Brewing() {//冲泡函数
		cout << "冲泡茶叶" << endl;
	}
	virtual void Pour_into_a_cup() {//倒入杯中函数
		cout << "倒入杯中" << endl;
	}
	virtual void Seasoning() {//计入辅料函数
		cout << "加入枸杞" << endl;
	}


};


class Brewed_coffee :public MakeDrink {
public: 
	virtual void Boil_Water() {//煮水函数
		cout << "烧开水" << endl;
	}
	virtual void Brewing() {//冲泡函数
		cout << "冲泡offee" << endl;
	}
	virtual void Pour_into_a_cup() {//倒入杯中函数
		cout << "倒入杯中" << endl;
	}
	virtual void Seasoning() {//计入辅料函数
		cout << "加入糖and牛奶" << endl;
	}
};


//制作函数
//1.第一种引用写法
void Do_woek_1(MakeDrink& ptr) {
	ptr.make_woek();
}

//2.第二种指针写法
void Do_worek_2(MakeDrink* ptr) {
	ptr->make_woek();
	delete ptr;
}

void test01() {
	cout << "------test01--------" << endl;
	Brewed_tea tea;//茶叶类
	Do_woek_1(tea);
	cout << endl;

	Brewed_coffee offee;//offee类
	Do_woek_1(offee);
	cout << endl;
}

void test02() {
	cout << "------test02--------" << endl;
	Do_worek_2(new Brewed_tea);//茶叶类
	
	Do_worek_2(new Brewed_coffee);//offee类

	
}

int main() {

	test01();

	test02();




	system("pause");
	return 0;
}