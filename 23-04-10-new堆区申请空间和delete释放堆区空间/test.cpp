#include<iostream>
#include<string>

using namespace std;

//new�ؼ��� �� c�����е�malloc����һ�� ��C++�и����涨��һ���ؼ���

//delete �ؼ��� �� C�����е�free����һ�� ��C++�и����涨���Ը�ؼ���

//�����ͷ��ڴ��� delete[] ��ַ

void new_delete() {//������������Ŀռ����ͷ�
	int* pr = new int(10);  

	cout << "*pr=" << *pr << endl;

	delete pr;//�ͷ���������ռ�


}

void new_delete_arr() {//��������Ŀռ����ͷ�

	int* pt = new int[10];//10Ԫ�ص���������


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

	

	new_delete();//������������Ŀռ����ͷ�

	new_delete_arr();//��������Ŀռ����ͷ�
	


	system("pause");
	return 0;
}