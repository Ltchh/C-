#include"employee.h"

/*
	*
	*
	*
*/

Employee::Employee(int id,string name,int number,string duty)//构造函数
{
	//this指向的是自己本身的成员属性和传过来的值作为一个区分
	this->m_id = id;		//自身的类的m_id初始化 
	this->m_name = name;	//自身的类的m_name初始化 
	this->m_number = number;//自身的类的m_number初始化
	this->m_duty = duty;	//自身的类的m_dutyc初始化
}

//行为:
//显示个人信息
void Employee::showInfo()//纯虚函数
{
	cout << "职工编号:" << this->m_id <<
		"\t职工姓名:" << this->m_name <<
		"\t岗位:" << this->getDeptName() <<
		"\t岗位职责:" << this->m_duty<<endl;
 }

//获取岗位名称
string Employee::getDeptName()//纯虚函数
{
	return string("员工");
	//return "员工";
	//如果不加string 返回的类型系统也会强制转换string类型
 }
