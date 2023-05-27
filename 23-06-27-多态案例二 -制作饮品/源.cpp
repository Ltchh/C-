#include<iostream>
#include<string>

using namespace std;

/*��������:(���� and ��Ҷ)
	*������Ʒ������:
	*				��ˮ -> ���� -> ���뱭�� -> ���븨��
	* 
	*���ö�̬����ʵ�ֱ�����,�ṩ����������Ʒ����,�ṩ����������Ҷ�Ϳ���
	*
*/

class MakeDrink
	//��һ�������д��麯�� �����Ҳ����������
	//���಻����ʵ����
	//����������������д����(����)���麯��,��������Ӻ���Ҳ�ǳ�����
{
public:

	//����4�����Ǵ��麯��
	virtual void Boil_Water() = 0;//��ˮ����
	virtual void Brewing() = 0;//���ݺ���
	virtual void Pour_into_a_cup() = 0;//���뱭�к���
	virtual void Seasoning() = 0;//���븨�Ϻ���

	//������Ʒ
	void make_woek() {
		Boil_Water();
		Brewing();
		Pour_into_a_cup();
		Seasoning();
	}
};

//������Ҷ��
class Brewed_tea:public MakeDrink
{
public:
	virtual void Boil_Water() {//��ˮ����
		cout << "�տ�ˮ" << endl;
	}
	virtual void Brewing() {//���ݺ���
		cout << "���ݲ�Ҷ" << endl;
	}
	virtual void Pour_into_a_cup() {//���뱭�к���
		cout << "���뱭��" << endl;
	}
	virtual void Seasoning() {//���븨�Ϻ���
		cout << "�������" << endl;
	}


};


class Brewed_coffee :public MakeDrink {
public: 
	virtual void Boil_Water() {//��ˮ����
		cout << "�տ�ˮ" << endl;
	}
	virtual void Brewing() {//���ݺ���
		cout << "����offee" << endl;
	}
	virtual void Pour_into_a_cup() {//���뱭�к���
		cout << "���뱭��" << endl;
	}
	virtual void Seasoning() {//���븨�Ϻ���
		cout << "������andţ��" << endl;
	}
};


//��������
//1.��һ������д��
void Do_woek_1(MakeDrink& ptr) {
	ptr.make_woek();
}

//2.�ڶ���ָ��д��
void Do_worek_2(MakeDrink* ptr) {
	ptr->make_woek();
	delete ptr;
}

void test01() {
	cout << "------test01--------" << endl;
	Brewed_tea tea;//��Ҷ��
	Do_woek_1(tea);
	cout << endl;

	Brewed_coffee offee;//offee��
	Do_woek_1(offee);
	cout << endl;
}

void test02() {
	cout << "------test02--------" << endl;
	Do_worek_2(new Brewed_tea);//��Ҷ��
	
	Do_worek_2(new Brewed_coffee);//offee��

	
}

int main() {

	test01();

	test02();




	system("pause");
	return 0;
}