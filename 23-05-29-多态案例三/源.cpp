#include<iostream>
#include<string>

using namespace std;

/*
	*
	*
	*
*/

class Cpu {
public:
	//抽象的计算的函数
	virtual void calcula() = 0; //纯虚函数
};

class Gpu {
public:
	//抽象的显示的函数
	virtual void disolay() = 0; //纯虚函数
};

class Memory {
public:
	//抽象的显示的函数
	virtual void storage() = 0; //纯虚函数
};

//电脑类
class Computer
{
public:
	Computer(Cpu* cpu, Gpu* gpu, Memory* mem){
		 m_cpu = cpu;
		 m_gpu = gpu;
		 m_mem = mem;
	};
	//工作函数
	void work() {
		m_cpu->calcula();
		m_gpu->disolay();
		m_mem->storage();
	}


private:
	Cpu* m_cpu;//Cpu零件
	Gpu* m_gpu;//显卡零件
	Memory* m_mem;//内存零件
};

//具体的厂家
//intel厂家
class intel_cpu :public Cpu {//cpu
public:
	void calcula() {
		cout << "intel->cpu开始运算" << endl;
	}
};

class intel_gpu :public Gpu {//显卡
public:
	void disolay() {
		cout << "intel->gpu开始显示" << endl;
	}
};

class intel_memroy :public Memory {//内存条
public:
	void storage() {
		cout << "intel->memory开始存储" << endl;
	}
};

//lenovo厂家
class lenovo_cpu :public Cpu {//cpu
public:
	void calcula() {
		cout << "intel->cpu开始运算" << endl;
	}
};

class lenovo_gpu :public Gpu {//显卡
public:
	void disolay() {
		cout << "intel->gpu开始显示" << endl;
	}
};

class lenovo_memroy :public Memory {//内存条
public:
	void storage() {
		cout << "intel->memory开始存储" << endl;
	}
};

void test01() {
	Cpu* Intel_Cpu = new intel_cpu;
	Gpu* Intel_Gpu = new intel_gpu;
	Memory* Intel_mem = new intel_memroy;

	//创建一台电脑
	Computer * computer=new Computer(inte)
}

int main() {

	test01();



	system("pause");
	return 0;
}