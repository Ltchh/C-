#include<iostream>

using namespace  std;

/*ռλ����
	����ֵ���� ������(��������)
*/


//Ŀǰ�׶ε�ռλ�������ǻ�û���õ�,����Ŀγ̻��õ� ��ǰԤѧ
void func(char a, int) {//����int����һ��ռλ����
	cout << "this is func" << endl;
}

int main(){

	func(10,15);//����15��д�ͻ���ֵ��ò���̫��

	system("pause");
	return 0;
}