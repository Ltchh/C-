#include<iostream>
#include<string>

using namespace std;

/*
	*
	*
	*
*/

enum MyEnum
{
	A = 1,
	B = 2,
	C = 3,
	D = 4,
	E = 5
};

int main() {

	int a = 1;
	while (1)
	{
		cin >>a;
		if (a) {//����ıȽ���,��Ϊ����ȵľʹ�ӡ
			cout << "***" << endl;

		}
		cout << "*****************" << endl;

		cout<<endl;

		cin >> a;
		if (!a) {//�ͼٵıȽ�,��Ϊ����Ⱦʹ�ӡ
			cout << "��***" << endl;

		}

	}

	system("pause");
	return 0;
}