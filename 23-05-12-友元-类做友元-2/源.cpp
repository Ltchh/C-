#include<iostream>
#include<string>

using namespace std;


/* ������Ԫ friend �ؼ���
	* һ���������һ���������˽�г�Ա����
	* 
*/


class Building {

	friend class GoodGay;//��Ԫ ����

public:

	Building() {
		M_SittingRoom = "����";
		M_BedRoom = "����";
	}

public:

	string M_SittingRoom; //����

private:

	string M_BedRoom;//����

};

class GoodGay
{
public:

	GoodGay();

	void visit();//�ιۺ���,����Building�е�����

	Building* building;

private:

};

GoodGay::GoodGay() {

	//����һ��������
	building = new Building;

}


/*/����д��Ա����
Building::Building() {
	M_SittingRoom = "����";
	M_BedRoom = "����";
}*/

void GoodGay::visit() {

	cout << "�û������ڷ���: " << building->M_SittingRoom << endl;

	cout << "�û������ڷ���: " << building->M_BedRoom << endl;  
	//���������Ԫ �������һ�����˽�г�Ա�ǲ����е�,�޷�����
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