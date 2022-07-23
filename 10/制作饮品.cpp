#include<iostream>
#include <string>
using namespace std;

class ABSDRINK {
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void Pour() = 0;
	virtual void Add() = 0;
	void MakeDrink() {
		Boil();
		Brew();
		Pour();
		Add();
	}
};

class COFFEE:public ABSDRINK {
public:
	virtual void Boil() {
		cout << "煮百岁山" << endl;
	}
	virtual void Brew() {
		cout << "冲泡咖啡" << endl;
	}
	virtual void Pour() {
		cout << "倒入杯中" << endl;
	}
	virtual void Add() {
		cout << "加入佐料" << endl;
	}
};

void doWork(ABSDRINK * abs) {
	abs->MakeDrink();
}

void test() {
	doWork(new COFFEE);
}

int main() {
	test();
	system("pause");
	return 0;
}
