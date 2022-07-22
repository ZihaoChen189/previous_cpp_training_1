#include<iostream>
using namespace std;

class BASE {
public:
	static void func() {
		cout << "base静态函数" << endl;
	}
	static int a;
};

class SON:public BASE {
public:
	static int a;
};

int SON::a = 200;
int BASE::a = 100;

void test() {
	SON s;
	SON::BASE::func();
	cout << "a = " << s.a << endl;
	cout << "BASEEEEEE a = " << SON::BASE::a << endl;
}

int main() {
	test();
	system("pause");
	return 0;
}