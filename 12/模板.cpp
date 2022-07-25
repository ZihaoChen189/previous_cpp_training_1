#include<iostream>
using namespace std;

void swapInt(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapDouble(double &a, double &b) {
	double temp = a;
	a = b;
	b = temp;
}
template<typename T>
void mySwap( T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}
void test() {
	int a = 10;
	int b = 20;
	// swapInt(a, b);
	// mySwap(a, b);
	mySwap<int>(a, b);
	cout << "a = " << a << " b = " << b << endl;

	double c = 1.1;
	double d = 2.2;
	// swapDouble(c, d);

	cout << "c = " << c << " d = " << d << endl;
}

int main() {
	test();
	system("pause");
	return 0;
}
