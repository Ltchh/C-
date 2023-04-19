#include<iostream>

using namespace std;

//类对象
 
#define PI 3.14
 
 
// C++面向对象的三大特性:
//						封装,继承,多态
 // C++认为万事万物皆为对象,对象有其属性和行为

/*例如:
	人可以作为对象,属性:姓名. 年龄 . 身高 . 体重 
				   行为:行走. 跑 . 跳 .吃饭 
				   
	           车	属性:轮胎 ,车灯  
					行为:载人 , 听音乐
	具有相同性质的对象,我们都可以抽象的称为类; 人属于人类,车属于车类			   
				   */


/*封装  :
		封装的意义:
					*将属性和行为作为一个整体,表现生活中的事物
					*将属性和行为加以权限控制
					*
					* 在设计的时候,属性和行为写在一起,表现事物
		语法:	/*class 类名 { 访问权限:
						* 公共权限	public		成员	类内可以访问 类外可以访问
						* 保护权限	protected	成员	类内可以访问 类外不可以访问  儿子可以访问父亲的保护的内容
						* 私有权限	private		成员	类内可以访问 内外不可以访问  儿子不可以访问父亲的保护的内容
		
				属性 / 行为 }
				* 
				* 
*/

		

//设计一个圆类求周长:
	//圆的周长= 2*PI*R

class Circle {		//圆类的创建

	//访问权限:
public:   //公共权限 
	 
	//圆的属性:
		//半径
	int m_r;


	//圆的行为:
		//获取圆的周长
	double calcualte_ZC()//函数
	{
		return PI * 2 * m_r;
	}
};

void Circle_lei() {
	//通过圆类 创建具体的圆(类)

	//实际化	(通过一个类 创建一个对象)
	Circle cl; //

	//给圆对象的属性赋值
	cl.m_r = 5;

	cout << "元的周长:" << cl.calcualte_ZC() << endl;

}


class student {   //学生类的创建

public:
	//学生的属性:
	char name[10];
	char numble[30];


	//学生的行为:
	char* print_na() {
		return name;
	}
	char* print_nu() {
		return numble;
	}
};


void student_lei() {  //学生类的
	student zhang[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> zhang[i].name >> zhang[i].numble;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "姓名:" << zhang[i].print_na() << endl;
		cout << "学号:" << zhang[i].print_nu() << endl;
	}
}

int main() {


	//Circle_lei(); //圆类的实例
	
	//设计一个学生类, 属性有姓名, 学号, 可以给姓名和学号赋值,
					 // 可以显示学生的姓名和学号:


	student_lei();	//学生类的练习


	system("pause");
	return 0;
}