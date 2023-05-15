#include<iostream>
#include<string>


using namespace std;

/*
	* 成员函数做友元
* 
* 

*/

class Building;



class Building {
	//告诉编译器 GoodGay 类下的visit成员函数作为本类的好朋友,可以访问私有成员
	friend void GoodGay::visit01();
public:
	Building();

public:
	string M_SittingRoom;//客厅

private:
	string M_BedRoom;//卧室
};

/*内外实现成员函数*/

Building::Building() {
	M_SittingRoom = "客厅";
	M_BedRoom = "卧室";
}

class GoodGay {
public:


	GoodGay();//构造函数

	void visit01();//让visit01函数可以访问Building 中的私有成员
	void visit02();//让visit02函数不可以访问Building 中的私有成员

	Building* building;

private:

};
GoodGay::GoodGay() {
	building = new Building;
	//在堆区创建一个额Building类的空间;然后用building指针来管理访问空间
}

void GoodGay::visit01() {
	cout << "visit01 函数正在访问:" << building->M_SittingRoom << endl;
	/*cout << "visit01 函数正在访问: " << building->M_BedRoom << endl;*/
}

void GoodGay::visit02() {

	cout << "visit02 函数正在访问: " << building->M_SittingRoom << endl;

}







void test01() {
	GoodGay gg;
	gg.visit01();
	gg.visit02();
}

void test02() {


}
int main() {
	

	test01();

	//test02();

	system("pause");
		return 0;
}