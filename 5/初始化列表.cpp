#include<iostream>
using namespace std;


class Person {
public:
	// Person(int parameterA, int parameterB, int parameterC) {
	// 	A = new int (parameterA);
	// 	B = new int (parameterB);
	// 	C = new int (parameterC);
	// }
	// int * A;
	// int * B;
	// int * C;
	// 初始化列表
	int A, B, C;
	Person(int a, int b, int c):A(a), B(b), C(c) {

	}
};

void test1() {
	Person p(30, 20, 10);
	// cout << "A" << *p.A << endl;
	// cout << "B" << *p.B << endl;
	// cout << "C" << *p.C << endl;
	cout << "A" << p.A << endl;
	cout << "B" << p.B << endl;
	cout << "C" << p.C << endl;
}


int main() {
	test1();
	system("pause");
	return 0;
}