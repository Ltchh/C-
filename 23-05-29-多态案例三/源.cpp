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
	//����ļ���ĺ���
	virtual void calcula() = 0; //���麯��
};

class Gpu {
public:
	//�������ʾ�ĺ���
	virtual void disolay() = 0; //���麯��
};

class Memory {
public:
	//�������ʾ�ĺ���
	virtual void storage() = 0; //���麯��
};

//������
class Computer
{
public:
	Computer(Cpu* cpu, Gpu* gpu, Memory* mem){
		 m_cpu = cpu;
		 m_gpu = gpu;
		 m_mem = mem;
	};
	//��������
	void work() {
		m_cpu->calcula();
		m_gpu->disolay();
		m_mem->storage();
	}


private:
	Cpu* m_cpu;//Cpu���
	Gpu* m_gpu;//�Կ����
	Memory* m_mem;//�ڴ����
};

//����ĳ���
//intel����
class intel_cpu :public Cpu {//cpu
public:
	void calcula() {
		cout << "intel->cpu��ʼ����" << endl;
	}
};

class intel_gpu :public Gpu {//�Կ�
public:
	void disolay() {
		cout << "intel->gpu��ʼ��ʾ" << endl;
	}
};

class intel_memroy :public Memory {//�ڴ���
public:
	void storage() {
		cout << "intel->memory��ʼ�洢" << endl;
	}
};

//lenovo����
class lenovo_cpu :public Cpu {//cpu
public:
	void calcula() {
		cout << "intel->cpu��ʼ����" << endl;
	}
};

class lenovo_gpu :public Gpu {//�Կ�
public:
	void disolay() {
		cout << "intel->gpu��ʼ��ʾ" << endl;
	}
};

class lenovo_memroy :public Memory {//�ڴ���
public:
	void storage() {
		cout << "intel->memory��ʼ�洢" << endl;
	}
};

void test01() {
	Cpu* Intel_Cpu = new intel_cpu;
	Gpu* Intel_Gpu = new intel_gpu;
	Memory* Intel_mem = new intel_memroy;

	//����һ̨����
	Computer * computer=new Computer(inte)
}

int main() {

	test01();



	system("pause");
	return 0;
}