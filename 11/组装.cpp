#include<iostream>
using namespace std;

class CPU {
public:
	virtual void calculate() = 0;
};

class VideoCard {
public:
	virtual void display() = 0;
};

class Memory {
public:
	virtual void storage() = 0;
};

class Computer {
public:
	Computer(CPU *cpu, VideoCard * vc, Memory * mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	// ~Computer() {
	// 	if (m_cpu != NULL) {
	// 		delete m_cpu;
	// 		m_cpu = NULL;
	// 	}
	// 	if (m_vc != NULL) {
	// 		delete m_vc;
	// 		m_vc = NULL;
	// 	}
	// 	if (m_mem != NULL) {
	// 		delete m_mem;
	// 		m_mem = NULL;
	// 	}
	// }
	void work() {
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
private:
	CPU * m_cpu;
	VideoCard * m_vc;
	Memory * m_mem;
};

class IntelCPU:public CPU {
public:
	virtual void calculate() {
		cout << "Intel的CPU开始计算" << endl;
	}
};

class IntelVideoCard:public VideoCard {
public:
	virtual void display() {
		cout << "Intel的显卡开始显示" << endl;
	}
};

class IntelMemory:public Memory {
public:
	virtual void storage() {
		cout << "Intel的内存条开始存储" << endl;
	}
};

class LenovoCPU:public CPU {
public:
	virtual void calculate() {
		cout << "Lenovo的CPU开始计算" << endl;
	}
};

class LenovoVideoCard:public VideoCard {
public:
	virtual void display() {
		cout << "Lenovo的显卡开始显示" << endl;
	}
};

class LenovoMemory:public Memory {
public:
	virtual void storage() {
		cout << "Lenovo的内存条开始存储" << endl;
	}
};

void test01() {
	// 第一台电脑零件
	CPU * intelCpu = new IntelCPU;
	VideoCard * interCard = new IntelVideoCard;
	Memory * interlMem = new IntelMemory;

	// 第一台电脑
	Computer * computer1 = new Computer(intelCpu, interCard, interlMem);
	computer1->work();
	delete computer1;

	// 第二台电脑
	cout << "第二台电脑：" << endl;
	Computer * computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;



}

int main() {
	test01();
	system("pause");
	return 0;
}