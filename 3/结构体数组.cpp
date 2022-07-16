#include <iostream>
using namespace std;
#include<string.h>
struct Student {
	string name;
	int age;
	int score;
};

int main() {
	struct Student studentArray[3] = {
		{"紫灏", 18, 100},
		{"珈艺", 19, 99},
		{"高天", 20, 100}
	};
	studentArray[2].score = 100;
	system("pause");
	return 0;
}