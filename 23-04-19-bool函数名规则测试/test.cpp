#include<iostream>
#include<string>

using namespace std;

bool tes_t_(int& a, int& b) {
	if (a > b)
		return true;
	return false;
}

int main(void) {
	int a, b;
	while (1)
	{
		cin >> a;
		cin >> b;
		bool ret = tes_t_(a, b);

		cout << ret;
	}

	system("pause");
	return 0;
}
