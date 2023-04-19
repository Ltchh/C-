#include<iostream>
#include<string>

using namespace std;

/*class 类名 { 访问权限:
						* 公共权限	public		成员	类内可以访问 类外可以访问
						* 保护权限	protected	成员	类内可以访问 类外不可以访问  儿子可以访问父亲的保护的内容
						* 私有权限	private		成员	类内可以访问 内外不可以访问  儿子不可以访问父亲的保护的内容
		
				属性 / 行为 }
				* 
				* 
*/


class person {

	//成员属性->

public:	//公共权限
	char name_1;

protected://保护权限
	char name_2;

private://私有权限
	char name_3;

	//成员行为->
public://公共权限
	void fun_1() {
		cin >> name_1;		//类内可以访问
		cin >> name_2;		//类内可以访问
		cin >> name_3;		//类内可以访问
	}

protected://保护权限
	void fun_2() {
		cin >> name_1;		//类内可以访问
		cin >> name_2;		//类内可以访问
		cin >> name_3;		//类内可以访问
	}

private://私有权限
	void fun_3() {
		cin >> name_1;		//类内可以访问
		cin >> name_2;		//类内可以访问
		cin >> name_3;		//类内可以访问
	}
};

int main() {
	person a1;

	cin>>a1.name_1;	//公共权限 类外可以访问
	//cin>>a1.name_2 = 2;//保护权限 类外不可以访问
	//cin>>a1.name_3 = 3;//私有权限 类外不可以访问

	return 0;
}

