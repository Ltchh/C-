//#include<iostream>
//#include<fstream>
//#include<string>
//
//using namespace std;
//
///*二进制文件操作  写文件
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
//	* 例:ios::out|ios::binary
//	*	二进制的方式写入文件
//	
//*/
//
////二进制写
//class MyClass
//{
//public:
//
//	char m_name[50];
//	int m_age;
//private:
//
//};
//
//
//void test01() {
//
//	//1.添加头文件
//
//	//2.创建流对象
//	ofstream ofs("test01.txt", ios::out | ios::binary);
//
//	//3.打开文件 (路径,打开方式)
//	//ofs.open("test01.txt", ios::out|ios::binary);
//
//	//4.写数据
//	MyClass p = { "张三",33 };
//	ofs.write((const char*)&p, sizeof(p));
//	//write 写
//	//read 读
// 
//	//&p类型是 MYCLASS的类型 这个数据流需要的是const char* 
//	//所以要强转类型
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
//	system("pause");
//	return 0;
//}