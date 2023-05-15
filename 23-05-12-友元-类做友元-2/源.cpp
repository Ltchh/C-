#include<iostream>
#include<string>

using namespace std;


/* 类做友元 friend 关键字
	* 一个类访问另一个类里面的私有成员变量
	* 
*/


class Building {

	friend class GoodGay;//友元 声明

public:

	Building() {
		M_SittingRoom = "客厅";
		M_BedRoom = "卧室";
	}

public:

	string M_SittingRoom; //客厅

private:

	string M_BedRoom;//卧室

};

class GoodGay
{
public:

	GoodGay();

	void visit();//参观函数,访问Building中的属性

	Building* building;

private:

};

GoodGay::GoodGay() {

	//创建一个建筑物
	building = new Building;

}


/*/内外写成员函数
Building::Building() {
	M_SittingRoom = "客厅";
	M_BedRoom = "卧室";
}*/

void GoodGay::visit() {

	cout << "好基友正在访问: " << building->M_SittingRoom << endl;

	cout << "好基友正在访问: " << building->M_BedRoom << endl;  
	//如果不用友元 类访问另一个类的私有成员是不可行的,无法访问
}

void test01() {
	GoodGay GG;

	GG.visit();

}

int main() {

	test01();



	system("pause");
	return 0;
}