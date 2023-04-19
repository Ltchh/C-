#include<iostream>
#include<string>

using namespace std;
/*
* 设计立方体类 (Cube)
	*求立方体的面积and体积
	*
	* 分别用全局变量and成员函数判断立方体是否相等
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
		立方体类的设计
		设计属性
		设计行为 获取立方体体积和面积
		分别利用全局函数和成员函数 判断两个立方体是否相等
	*/

class Cube {
public:		//公共权限
	//设置长
	void set_l(int l) {
		m_l = l;
	}
	//获取长
	int get_l() {
		return m_l;
	}
	 
	//设置宽
	void set_w(int w) {
		m_w = w;
	}
	//获取宽
	int get_w() {
		return m_w;
	}

	//设置高
	void set_h(int h) {
		m_h = h;
	}
	//获取高
	int get_h() {
		return m_h;
	}

	//获取立方体的表面积
	int get_s() {
		return 2*(m_l*m_w+m_w*m_h+m_h*m_l);
	 }
	//获取立方体的体积
	int get_v() {
		return m_l * m_w * m_h;
	}

	//利用成员函数判断两个立方体是否相等
	bool insameBYcalss(Cube& c) {
		if (m_l == c.get_l() && m_w == c.get_w() && m_h == c.get_h())
			return true;
		else
			return false;
	}

private://私有权限(属性一般设置为私有权限)
	int m_l;	//长宽高
	int m_w;
	int m_h;
};


void Cube_inform(Cube& c1) {
	cout << "C1表面积: " << c1.get_s() << endl;
	cout << "C1体积: " << c1.get_s() << endl;
}

void Clwh(int& l, int& w, int& h, Cube& c_s_v) {
	cout << "输入长: ";
	cin >> l;
	c_s_v.set_l(l);

	cout << "输入高: ";
	cin >> w;
	c_s_v.set_w(w);

	cout << "输入宽; ";
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

	//创建立方体对象
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
		cout << "相同" << endl;
	else
		cout << "不相同" << endl;

	system("pause");

	return 0;
}

