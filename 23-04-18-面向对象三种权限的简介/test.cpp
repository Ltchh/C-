#include<iostream>
#include<string>

using namespace std;

/*class ���� { ����Ȩ��:
						* ����Ȩ��	public		��Ա	���ڿ��Է��� ������Է���
						* ����Ȩ��	protected	��Ա	���ڿ��Է��� ���ⲻ���Է���  ���ӿ��Է��ʸ��׵ı���������
						* ˽��Ȩ��	private		��Ա	���ڿ��Է��� ���ⲻ���Է���  ���Ӳ����Է��ʸ��׵ı���������
		
				���� / ��Ϊ }
				* 
				* 
*/


class person {

	//��Ա����->

public:	//����Ȩ��
	char name_1;

protected://����Ȩ��
	char name_2;

private://˽��Ȩ��
	char name_3;

	//��Ա��Ϊ->
public://����Ȩ��
	void fun_1() {
		cin >> name_1;		//���ڿ��Է���
		cin >> name_2;		//���ڿ��Է���
		cin >> name_3;		//���ڿ��Է���
	}

protected://����Ȩ��
	void fun_2() {
		cin >> name_1;		//���ڿ��Է���
		cin >> name_2;		//���ڿ��Է���
		cin >> name_3;		//���ڿ��Է���
	}

private://˽��Ȩ��
	void fun_3() {
		cin >> name_1;		//���ڿ��Է���
		cin >> name_2;		//���ڿ��Է���
		cin >> name_3;		//���ڿ��Է���
	}
};

int main() {
	person a1;

	cin>>a1.name_1;	//����Ȩ�� ������Է���
	//cin>>a1.name_2 = 2;//����Ȩ�� ���ⲻ���Է���
	//cin>>a1.name_3 = 3;//˽��Ȩ�� ���ⲻ���Է���

	return 0;
}

