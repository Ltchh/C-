#include<iostream>
#include<string>


using namespace std;

/*
	* ��Ա��������Ԫ
* 
* 

*/

class Building;



class Building {
	//���߱����� GoodGay ���µ�visit��Ա������Ϊ����ĺ�����,���Է���˽�г�Ա
	friend void GoodGay::visit01();
public:
	Building();

public:
	string M_SittingRoom;//����

private:
	string M_BedRoom;//����
};

/*����ʵ�ֳ�Ա����*/

Building::Building() {
	M_SittingRoom = "����";
	M_BedRoom = "����";
}

class GoodGay {
public:


	GoodGay();//���캯��

	void visit01();//��visit01�������Է���Building �е�˽�г�Ա
	void visit02();//��visit02���������Է���Building �е�˽�г�Ա

	Building* building;

private:

};
GoodGay::GoodGay() {
	building = new Building;
	//�ڶ�������һ����Building��Ŀռ�;Ȼ����buildingָ����������ʿռ�
}

void GoodGay::visit01() {
	cout << "visit01 �������ڷ���:" << building->M_SittingRoom << endl;
	/*cout << "visit01 �������ڷ���: " << building->M_BedRoom << endl;*/
}

void GoodGay::visit02() {

	cout << "visit02 �������ڷ���: " << building->M_SittingRoom << endl;

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