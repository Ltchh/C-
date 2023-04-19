#include<iostream>

using namespace  std;

/*占位参数
	返回值类型 函数名(数据类型)
*/


//目前阶段的占位参数我们还没有用到,后面的课程会用到 提前预学
void func(char a, int) {//这里int就是一个占位参数
	cout << "this is func" << endl;
}

int main(){

	func(10,15);//这里15不写就会出现调用参数太少

	system("pause");
	return 0;
}