#include"БъЭЗ.h"

int main() {
	int a;
	cin >> a;
	MyClass pa01(a);
	
	MyClass pa02(pa01);

	cout << "pa02.M_a=" << pa02.M_b << endl;
	return 0;
}