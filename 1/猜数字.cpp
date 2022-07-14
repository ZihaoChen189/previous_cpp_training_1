#include <iostream>
using namespace std;

int main() {
	int number = rand()%100 + 1;
	int value_input = 0;

	while(1) {
		cin >> value_input;
		if (value_input > number) {
			cout << "猜测过大" << endl;
		} else if (value_input < number) {
			cout << "猜测过小" << endl;
		} else {
			cout << "BINGO!!" << endl;
			break;
		}
	}
	
 
	system("pause");
	return 0;
}