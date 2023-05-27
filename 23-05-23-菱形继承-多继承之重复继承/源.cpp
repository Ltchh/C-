#include<iostream>
#include<string>

using namespace std;

/*菱形继承
	*			动物
	*		养		  骆驼
	*			 羊驼
	* 
	* 羊驼重复继承了动物这个基类的数据
	*
	*虚继承可以解决菱形继承问题
	* 在继承之前加上 virtual 变为虚继承
	* animal类称为 虚基类
*/

//动物类
 class animal {

public:
	int m_age;

};

//羊类
class sheep:virtual public animal {

};

//骆驼类
class tuo:virtual public animal{

};

//羊驼类
class sheep_tuo :public sheep,public tuo {

};

void test01() {
	sheep_tuo p1;

	p1.sheep::m_age = 10;
	p1.tuo::m_age = 28;

	//当我们菱形继承的时候 ,两个基类有相同的数据,需要加以作用域
	cout << "p1.sheep::m_age =" << p1.sheep::m_age << endl;
	cout << "p1.tuo::m_age =" << p1.tuo::m_age << endl;

	cout << "p1.m_age" << p1.m_age << endl;

	//这份数据只要一份数据就可以了,菱形继承造成了两份数据,造成了资源浪费

}

int main() {


	test01();


	system("pause");
	return 0;
}