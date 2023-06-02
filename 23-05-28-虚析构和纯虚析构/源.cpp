#include<iostream>
#include<string>

using namespace std;

/*虚析构和纯虚析构
	*<一>多态使用时 如果子类中有属性开辟到堆区(new开辟的空间)(*******重要******),
					那么父类指针在释放时无法调用到子类的析构代码
	*	解决方案:将父类中的析构函数改为虚析构或者纯虚析构
	*
	* <二>虚析构和纯虚析构的共性:
	*	1.可以解决父类指针释放的子类对象
	*	2.都需要具体的函数实现
	* 
	* <三>虚析构和纯虚析构的区别:
	* 如果时纯虚析构,该类为抽象类,无法实例化
	* 
	* <四>虚析构语法: virtual ~类名(){}
	*	  纯虚析构语法:virtual~类名()=0;
	*		
	* 总结:
	*		1.虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
	*		2.如果子类中没有堆区数据,可以不写虚析构或纯虚析构
	*		3.拥有纯虚析构函数的类也属于抽象类
	* 
*/
class animal//动物->抽象类
{
public:
	animal() {
		cout << "animal构造函数" << endl;
	}
	//纯虚函数
	virtual void speak() = 0;

	//虚析构
	//利用虚析构可以解决 父类指针释放子类对象时的不干净的问题
	

	virtual ~animal() {//虚析构函数
		cout << "animal析构函数" << endl;
	}

	//纯虚析构  ->  需要声明也需要实现
	// 
	//有了纯虚析构之后 这个类也属于抽象类 ,无法实例化对象
	virtual ~animal() = 0;

private:

};

animal:: ~animal() {

};

class cat:public animal
{
public:



	cat(string name)//构造函数
	{
		cout << "cat构造函数调用" << endl;
		m_cat = new string(name);//堆区属性
	}

	void speak() {
		cout <<*m_cat<< "小猫在叫唤" << endl;
	}

	string* m_cat;

	~cat() {
		cout << "cat析构函数调用" << endl;
		if (m_cat != NULL) {
			delete m_cat;
			m_cat == NULL;
		}
	}
private:

};


void test01() {
	animal* Cat = new cat("Tom");
	Cat->speak();
	//正常父类指针在析构的时候,不会调用子类中析构函数,导致子类如果有堆区属性,出现内存泄漏
	delete Cat;
}

int main() {


	test01();


	system("pause");
	return 0;
}