#include<iostream>
#include<string>

using namespace std;

class MyClass
{
public:
	void my_c() {
		cout << "my is class" << endl;
	}
	
	void my_cc() {

		if (this == NULL)//����Ľ�׳�� ��ֹ���ִ����ֵΪ�� ��������  (���뽡׳��)
			return;
		cout << "my_age=" << this->M_age << endl;//M_ageĬ��ǰ����һ��this->M_age
	}

	int M_age;
private:

};


void test01() {

	MyClass *P1 = NULL;

	//P1->my_c();
	P1->my_cc();

}
int main() {

	test01();

	system("pause");
	return 0;
}