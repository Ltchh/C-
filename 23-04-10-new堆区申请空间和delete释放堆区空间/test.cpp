#include<iostream>
#include<string>

using namespace std;

//new关键字 和 c语言中的malloc函数一样 在C++中给他规定了一个关键字

//delete 关键字 和 C语言中的free函数一样 在C++中给它规定了以哥关键字

//数组释放内存是 delete[] 地址

void new_delete() {//单个变量申请的空间与释放
	int* pr = new int(10);  

	cout << "*pr=" << *pr << endl;

	delete pr;//释放申请堆区空间


}

void new_delete_arr() {//数组申请的空间与释放

	int* pt = new int[10];//10元素的整形数组


	int* pl = pt;

	for (int i = 0; i < 10; i++)
	{
		pt[i] = i;
		cout << "pt[" << i << "]=" << pt[i] << endl;
	}
	
	cout << sizeof(pt);
	delete[] pt;
}


int main() {

	

	new_delete();//单个变量申请的空间与释放

	new_delete_arr();//数组申请的空间与释放
	


	system("pause");
	return 0;
}