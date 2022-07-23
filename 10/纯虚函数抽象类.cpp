#include<iostream>
using namespace std;

class BASE {
public:
	virtual void func() = 0;
	// 抽象类 无法实例化对象
};

class SON:public BASE {
public:
	virtual void func() {
		cout << "virtual SON" << endl;
	}
};

void test() {
	// SON s;
	BASE *b = new SON;
	b->func();
}

int main(int argc, char const *argv[]) {
	test();
	system("pause");
	return 0;
}