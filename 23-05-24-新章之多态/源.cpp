#include<iostream>
#include<string>

using namespace std;

//����Ŀռ�Ϊ1
//���������ݿռ�Ϊ4��ָ��Ĵ�С�ռ�

/*	��̬:
	*	��̬��̬:�������� ������������ھ�̬��̬,���ú�����
	*	��̬��̬:��������麯��ʵ������ʱ��̬
	����:
	*��̬��̬�ĺ�����ַ��� - ����׶�ȷ��������ַ
	*��̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ
*/


/*
* ��̬��̬��������:
*	 1.�м̳й�ϵ
*	 2.������д������麯��
* 
* ��̬��̬ʹ��:
*	1.�����ָ������� ִ���������
* 
* 
*/

//������
class animal {
	public:
	 virtual void speak() { //virtual - �麯���ؼ���  -- �麯��
			cout << "������˵��" << endl;
	 }
};


//è��
//��д: ��������ֵ���� ������ �����б� ��ȫ��ͬ
class cat:public animal {
public:
	void speak() {
		cout << "Сè�ڽ�" << endl;
	}
};

//����
//��д: ��������ֵ���� ������ �����б� ��ȫ��ͬ
class dog :public animal{
	void speak() {
		cout << "С���ڽ�" << endl;
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