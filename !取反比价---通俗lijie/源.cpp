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
		if (a) {//和真的比较真,都为真相等的就打印
			cout << "***" << endl;

		}
		cout << "*****************" << endl;

		cout<<endl;

		cin >> a;
		if (!a) {//和假的比较,都为假相等就打印
			cout << "非***" << endl;

		}

	}

	system("pause");
	return 0;
}