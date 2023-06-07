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
	~Computer() {
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_gpu != NULL) {
			delete m_gpu;
			m_gpu = NULL;
		}
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
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
		cout << "lenovo->cpu��ʼ����" << endl;
	}
};

class lenovo_gpu :public Gpu {//�Կ�
public:
	void disolay() {
		cout << "lenovo->gpu��ʼ��ʾ" << endl;
	}
};

class lenovo_memroy :public Memory {//�ڴ���
public:
	void storage() { 
		cout << "lenovo->memory��ʼ�洢" << endl;
	}
};

void test01() {
	Cpu* Intel_Cpu = new intel_cpu;
	Gpu* Intel_Gpu = new intel_gpu;
	Memory* Intel_Mem = new intel_memroy;

	//������һ̨����
	Computer* computer1 = new Computer(Intel_Cpu,	 Intel_Gpu,    Intel_Mem);//�����4�к������1������ȵ�
	//									||				||				||
	//Computer* computer1 = new Computer(new intel_cpu,new intel_gpu,new intel_memroy);
	
	computer1->work();
	delete computer1;

	cout << "--------------------------------------" << endl;

	Cpu* Lenovo_Cpu = new lenovo_cpu;
	Gpu* Lenovo_Gpu = new lenovo_gpu;
	Memory* Lenovo_Mem = new lenovo_memroy;

	//�����ڶ�̨
	Computer* computer2 = new Computer(Lenovo_Cpu,	   Lenovo_Gpu,		Lenovo_Mem);//�����4�к������1������ȵ�
	//									||				||					||
	//Computer *computer2 = new Computer(new lenovo_cpu, new lenovo_gpu, new lenovo_memroy);
	computer2->work();
	delete computer2;
	computer2 = NULL;
}

int main() {

	test01();

	system("pause");
	return 0;
}