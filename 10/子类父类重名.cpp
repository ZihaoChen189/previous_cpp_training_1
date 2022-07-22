#include<iostream>
using namespace std;

class BASE {
public:
	BASE() {
		a = 100;
	}
	int a;
};

class SON:public BASE {
public:
	SON() {
		a = 200;
	}
	int a;
};

void test() {
	SON s;
	cout << "a = " << s.a << endl;
	cout << "BASEEEEEE a = " << s.BASE::a << endl;
}

int main() {
	test();
	system("pause");
	return 0;
}