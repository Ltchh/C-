#include<iostream>
#include<string>

using namespace std;

class c1 {
	int m_1;//默认私有权限
};

typedef struct c2 {
	int m_2;//默认公共权限
};

int main() {


	/*struct结构和class类的区别:
			*struct 默认权限 是public->公共权限
			*class  默认权限 是private->私有权限*/
	c1 aa;
	c2 bb;

	cin >> aa.m_1;//私有权限 类外不可以访问

	cin >> bb.m_2;//公共权限 类外可以访问
	
	system("pause");
	return 0;
}