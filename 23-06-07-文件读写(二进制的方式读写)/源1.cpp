#include<iostream>
#include<fstream>
#include<string>

using namespace std;

/*
	进制文件操作  读文件
	* 操作文件的三大类:
	* 1.ofstream:  (open file stream) 写操作
	* 2.ifstream:  (input stream ) 读操作
	* 3.fstream:   (file stream  )读写操作
	*
	* 打开方式:
	* 1.ios::in 为读文件而打开文件
	* 2.ios::out 为写文件而打开文件
	* 3.ios::ate 初始位置:文件尾  (追加)
	* 4.ios::app	追加的方式写文件
	* 5.ios::trunc	如果文件存在先删除,在创建
	* 6.ios::binary	而二进制方式
	* 
	* 例:ios::in|ios::binary
	*	二进制的方式读文件
*/


//二进制 读文件

class MyClass
{
public:

	char m_name[50];
	int m_age;
private:

};
void test01() {

	//添加头文件

	//创建文件流对象
	ifstream ifs;
	//打开文件(文件路径, 打开方式)
	ifs.open("test01.txt", ios::in | ios::binary);
		//判断是否打开成功
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}

	//读取文件
	MyClass p;
	ifs.read((char*)&p, sizeof(p));
	//read  读
	//write 写

	cout << "姓名:" << p.m_name << endl;
	cout<< "年龄:" << p.m_age << endl;

	//关闭文件
	ifs.close();
 }
int main() {

	test01();

	system("pause");
	return 0;
}