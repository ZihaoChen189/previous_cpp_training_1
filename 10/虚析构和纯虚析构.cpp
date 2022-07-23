#include<iostream>
#include<string>
using namespace std;

class ANIMAL {
public:
	ANIMAL() {
		cout << "ANIMAL 构造函数" << endl;
	}
	// virtual ~ANIMAL = 0;
	virtual void speak() = 0;
};

class CAT:public ANIMAL {
public:
	CAT(string name) {
		cout << "CAT 构造函数" << endl;
		m_name = new string(name);
	}
	virtual void speak() {
		cout << *m_name << "小猫在说话" << endl;
	}
	~CAT() {
		if (m_name != NULL) {
			cout << "CAT 析构" << endl;
			delete m_name;
			m_name = NULL;
		}
	}
	string * m_name;
};

void test() {
	ANIMAL * animal = new CAT("Tom");
	animal->speak();
	delete animal;
}

int main(){
	test();
	system("pause");
	return 0;
}