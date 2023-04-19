#include<iostream>

using namespace std;

//函数默认值
	//如果我们自己传入数据,就用自己的数据,如果没有,那么用默认值

	//语法:返回值类型  函数名(形参=默认值)

/*注意
	1.如果某个位置已经有了默认参数, 那么从这个位置往后, 从左到右都必须有默认参数

	2.如果函数声明有默认参数,函数实现就不能有默认参数;声明和实现只能由一处由默认参数			

		/例:

			int func(int a=10, int b=20);//函数声明 有默认参数

			intfunc(int a,int b){//函数实现  函数实现就不能有默认参数

			return a+b;
			}

*/

int func(int a=10, int b=20, int c=12) {  //a=10,b=20,c=12  10.20.12 是默认值


	return a+b+c;
}

int main() {

	int a = 1, b = 2, c = 3;

	func(20, 15);

	cout << func(20, 15) << endl;

	system("pause");
	return 0;
}