#include<iostream>
using namespace std;

class BASE1 {
public:
	BASE1() {
		a = 100;
	}
	int a;
};

class BASE2 {
public:
	BASE2() {
		a = 200;
	}
	int a;
};

class SON:public BASE1, public BASE2 {
public:
	SON() {
		c = 300;
		d = 400;
	}
	int c, d;
};

void test() {
	SON s;
	cout << "sizeof s = " << sizeof(s) << endl;
	cout << s.BASE1::a << endl;
	cout << s.BASE2::a << endl;
}

int main() {
	test();
	system("pause");
	return 0;
}