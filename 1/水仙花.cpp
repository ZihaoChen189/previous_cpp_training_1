#include <iostream>
using namespace std;

int main() {
	int number = 100;
	do {
		int a, b, c = 0;
		a = number % 10;  // 个
		b = number / 10 % 10;  // 十
		c = number / 100;
		if (a*a*a + b*b*b + c*c*c == number) {
			cout << number << endl;
		}
		number++;
	} while (number < 1000);

	system("pause");
	return 0;
}