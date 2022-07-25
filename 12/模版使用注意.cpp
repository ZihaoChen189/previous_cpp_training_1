#include<iostream>
using namespace std;

template<typename T>
void Swap( T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void func() {
	cout << "func调用" << endl;
}


// void test() {
// 	int a = 10;
// 	int b = 20;
	
// 	Swap<int>(a, b);
// 	cout << "a = " << a << " b = " << b << endl;
// }

void test2() {
	func<int>();
}

int main() {
	test2();
	system("pause");
	return 0;
}
