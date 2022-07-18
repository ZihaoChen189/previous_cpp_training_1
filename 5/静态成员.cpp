#include<iostream>
using namespace std;


class Person {
public:
	static int a;
// private:
// 	static int b;
};

int Person::a = 100;
// int Person::b = 20;
void test() {
	Person p;
	cout << p.a << endl;
	Person p1;
	p1.a = 10000;
	cout << p.a << endl;
}

void test2() {
	cout << Person::a << endl;
	// cout << Person::b << endl;
}


int main() {
	test();
	system("pause");
	return 0;
}