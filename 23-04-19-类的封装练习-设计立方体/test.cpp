#include<iostream>
#include<string>

using namespace std;
/*
* ����������� (Cube)
	*������������and���
	*
	* �ֱ���ȫ�ֱ���and��Ա�����ж��������Ƿ����
	*			 _ _ _ _ _ 
	*		   /		 /|
	*		  /         / |
	*		 /_ _ _ _ _/  |
	*        |         |  /
	*        |         | /
	*        |         |/
	*		  - - - - - 
*/

	/*
		������������
		�������
		�����Ϊ ��ȡ��������������
		�ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����
	*/

class Cube {
public:		//����Ȩ��
	//���ó�
	void set_l(int l) {
		m_l = l;
	}
	//��ȡ��
	int get_l() {
		return m_l;
	}
	 
	//���ÿ�
	void set_w(int w) {
		m_w = w;
	}
	//��ȡ��
	int get_w() {
		return m_w;
	}

	//���ø�
	void set_h(int h) {
		m_h = h;
	}
	//��ȡ��
	int get_h() {
		return m_h;
	}

	//��ȡ������ı����
	int get_s() {
		return 2*(m_l*m_w+m_w*m_h+m_h*m_l);
	 }
	//��ȡ����������
	int get_v() {
		return m_l * m_w * m_h;
	}

	//���ó�Ա�����ж������������Ƿ����
	bool insameBYcalss(Cube& c) {
		if (m_l == c.get_l() && m_w == c.get_w() && m_h == c.get_h())
			return true;
		else
			return false;
	}

private://˽��Ȩ��(����һ������Ϊ˽��Ȩ��)
	int m_l;	//�����
	int m_w;
	int m_h;
};


void Cube_inform(Cube& c1) {
	cout << "C1�����: " << c1.get_s() << endl;
	cout << "C1���: " << c1.get_s() << endl;
}

void Clwh(int& l, int& w, int& h, Cube& c_s_v) {
	cout << "���볤: ";
	cin >> l;
	c_s_v.set_l(l);

	cout << "�����: ";
	cin >> w;
	c_s_v.set_w(w);

	cout << "�����; ";
	cin >> h;
	c_s_v.set_h(h);
}

bool iss_ame(Cube& c_s_v, Cube& c_s_v_1) {
	if (c_s_v.get_l() == c_s_v_1.get_l() &&c_s_v.get_w() == c_s_v_1.get_w() &&c_s_v.get_h() == c_s_v_1.get_h()) {
		return true;
	}
	else
		return false;
}

int main() {

	//�������������
	Cube c_s_v;

	int l, w, h;

	Clwh(l=0, w=0, h=0, c_s_v);

	Cube_inform(c_s_v);

	Cube c_s_v_1;
	int l_1, w_1, h_1;

	Clwh(l_1 = 0, w_1 = 0, h_1 = 0, c_s_v_1);

	bool ret=iss_ame(c_s_v, c_s_v_1);

	//bool ret = c_s_v_1.insameBYcalss(c_s_v_1);
	if (ret > 0)
		cout << "��ͬ" << endl;
	else
		cout << "����ͬ" << endl;

	system("pause");

	return 0;
}

