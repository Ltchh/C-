#include<iostream>
#include<string>

using namespace std;

/* 继承 之 第一章
	*  类与类之间存在特殊关系
	* *减少重复的代码
	*继承的基础语法
	* class 子类 : 继承方式  父类
	* 例:
	* class A    : public	 B
	*  (A)类为子类:也叫做派生类
	*  (B)类为父类:也叫做基类
	* 
	* 派生类中的成员,包含两大部分
	*	一类是从基类继承过来,一类是自己增加的成员
	*	从基类继承过来的表现其共性,而新增加的成员体现了其个性
	

*/


//网站的大概样式
//class java
//{
//public:
//	void header() {  //头部
//		cout << "首页, 公开课 ,登录....(公共头部)" << endl;
//	}
//
//	void footer() {//最下面
//		cout << "帮助中心,交流中心,站内地图...(公共底部)" << endl;
//	}
//
//	void left() {//左右
//		cout << "java ,c,c++...(公共列表)"<<endl;
//	}
//
//	void content() {
//		cout << "java教学视频(特有的)" << endl;
//	}
//
//private:
//
//};

//继承实现页面

	//创建一个公共的类做继承
class basepage
{
public:
	void header() {  //头部
		cout << "1.首页, 公开课 ,登录....(公共头部)" << endl;
	}

	void footer() {//最下面
		cout << "2.帮助中心,交流中心,站内地图...(公共底部)" << endl;
	}

	void left() {//左右
		cout << "3.java ,c,c++...(公共列表)" << endl;
	}
private:
};

//Java页面
class Java:public basepage//继承basepage公共权限属性
{
public:
	void content() {//(特有的内容)
		cout << "(*).Java教学视频(特有的)" << endl;
	}

private:

};

//c页面
class C:public basepage//继承公共权限属性
{
public:
	void content() {//(特有的内容)
		cout << "(*).C教学视频(特有的)" << endl;
	}

private:

};

//c++页面
class Cpp :public basepage//继承公共权限属性
{
public:
	void content() {//(特有的内容)
		cout << "(*).Cpp教学视频(特有的)" << endl;
	}

private:

};

int main() {

	Java Ja;
	Ja.header();
	Ja.footer();
	Ja.left();
	Ja.content();
	cout << "---------------" << endl<<endl;

	C c;
	c.header();
	c.footer();
	c.left();
	c.content();
	cout << "---------------" << endl<<endl;

	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
	cout << "---------------" << endl<<endl;


	system("pause");
	return 0;
}