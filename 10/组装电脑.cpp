#include <iostream>
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
	Computer(CPU * cpu, VideoCard * vc, Memory * m_memory) {
		m_cpu = cpu;
		m_vc = vc;
		m_memory = m_memory;
	}
private:
	CPU * m_cpu;
	VideoCard * m_vc;
	Memory * m_memory;
};

void work() {
	m_cpu->calculate();
	m_vc->display();
	m_memory->storage();
}

class InterlCPU:public CPU {
public:
	virtual void calculate() {
		cout << "Interl CPU 计算ing" << endl;
	}
};

class VideoCard:public VideoCard {
public:
	virtual void display() {
		cout << "Interl 显卡 显示ing" << endl;
	}
};

class Memory:public Memory {
public:
	virtual void storage() {
		cout << "Interl 内存条 显示ing" << endl;
	}
};

void test() {
	CPU * interlcpu = new InterlCPU;
	VideoCard * interlcard = new VideoCard;
	Memory * interlmemory = new Memory;

	Computer * c1 = new Computer(interlcpu, interlcard, interlmemory);
	c1->work();
}

int main(int argc, char const *argv[]) {
	test();
	system("pause");
	return 0;
}