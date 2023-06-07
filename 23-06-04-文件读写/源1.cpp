#include<iostream>
#include<fstream>//文件操作头文件
#include<string>

using namespace std;

/*文件操作
	* 头文件 <fstream>
	*
	* 1.文本文件: 文件以ASCLL码形式存储在计算机
	* 2.二进制文件:文件以二进制的方式存储在计算机中
	*
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
	* 写文件:
	* 1.包含头文件
	*		#include<stream>
	* 2.创建流对象
	*		ifstream ifs;
	* 3.打开文件:
	*		ifs.open("文件路径",打开方式);
	* 4.读数据(4种)
	*		ifs<<""写如数据";
	* 5.关闭文件
	*		ifs.close();
	*
	* 注意:
	*	文件打开方式可以配合使用 ,利用 "|"操作符
	* 例:用二进制的方式写文件
	*	ios::binary | ios::out;
*/

//文件的读
void test01() {

	//1.包含头文件

	//2.创建流对象
	ifstream ifs;

	//3.打开文件,并且判断是否成功
	ifs.open("test01.txt", ios::in);
	if (!ifs.is_open()) {
		//ifs.is_open返回的是一个布尔值
		//打开成功为真 true	1
		//打开失败为假 false	0

		cout << "文件打开失败" << endl;
		return;
	}

	//4.读数据(4种读取方法)
		//第一种:(推荐这一种)
	//char buf[1024] = { 0 };
	//while (ifs>>buf)
	//{
	//	cout << buf << endl;
	//}
	//cout << endl;

		//第二种:
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//	//	   存入的地址  ,读取多少字节
	//{
	//	cout << buf << endl;
	//}
	 
		//第三种 (推荐这一种)
	//string buf;
	//while (getline(ifs,buf))
	//
	////			输入流 存入的地址
	//{
	//	cout << buf << endl;
	//}

		//第四种: (不推荐这一种)
	char ch;
	while ((ch = ifs.get())!=EOF)//EOF->end of file  是否是文件结尾
		//	读取一个一个字符判断石佛到末尾
	{
		cout << ch;
	}
	
	//5.关闭文件
	ifs.close();
}

int main() {

	test01();



	system("pause");
	return 0;
}