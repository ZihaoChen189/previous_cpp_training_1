#include <iostream>
using namespace std;


void func(int a, int = 100) {
	cout << "this is function" << endl;
}


int main() {
	func(10);
	system("pause");
	return 0;
}