#include<iostream>
using namespace std;


class Person {
public:
	static void func() {
		cout << "static function" << endl;
		a = 200;
		 // b = 10;
	}
	static int a;
	int b;
private:
	static 
};

int Person::a = 100;
void test() {
	Person p;
	p.func();
	Person::func();
}


int main() {
	test();
	system("pause");
	return 0;
}
