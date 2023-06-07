//#include<iostream>
//#include<fstream>//文件操作头文件
//#include<string>
//
//using namespace std;
//
///*文件操作
//	* 头文件 <fstream>
//	*
//	* 1.文本文件: 文件以ASCLL码形式存储在计算机
//	* 2.二进制文件:文件以二进制的方式存储在计算机中
//	* 
//	* 操作文件的三大类:
//	* 1.ofstream:  (open file stream) 写操作
//	* 2.ifstream:  (input stream ) 读操作
//	* 3.fstream:   (file stream  )读写操作
//	* 
//	* 打开方式:
//	* 1.ios::in 为读文件而打开文件
//	* 2.ios::out 为写文件而打开文件
//	* 3.ios::ate 初始位置:文件尾  (追加)
//	* 4.ios::app	追加的方式写文件
//	* 5.ios::trunc	如果文件存在先删除,在创建
//	* 6.ios::binary	而二进制方式
//	* 
//	* 写文件:
//	* 1.包含头文件
//	*		#include<stream>
//	* 2.创建流对象
//	*		ofstream ofs;
//	* 3.打开文件:
//	*		ofs.open("文件路径",打开方式);
//	* 4.写数据
//	*		ofs<<""写如数据";
//	* 5.关闭文件
//	*		ofs.close();
//	* 
//	* 注意:
//	*	文件打开方式可以配合使用 ,利用 "|"操作符
//	* 例:用二进制的方式写文件
//	*	ios::binary | ios::out; 
//*/	
//
////文件写
//
//void test01() {
//	//1.包含头文件	#include<fstream>
//
//	//2.创建流对象
//	ofstream ofs;  //相当于创建一个对象
//	//fstream	ofs1;	//读写操作
//
//	//3.打开文件
//	ofs.open("test01.txt", ios::out);
//	//			相对路径   打开方式
//
//	//4.读/写数据
//	ofs << "姓名:高贵的山鸡" << endl;
//	ofs << "年龄:33" << endl;
//
//	//5.关闭文件
//	ofs.close();
//}
//
//int main() {
//	
//	test01();
//
//
//
//
//	system("pause");
//	return 0;
//}