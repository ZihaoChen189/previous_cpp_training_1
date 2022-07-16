#include <iostream>
#include<string.h>
using namespace std;


struct Student {
	string name;
	int age;
	int score;
};


int main() {
	struct Student s1 = {"紫灏", 18, 100};
	struct Student *p = &s1;
	
	system("pause");
	return 0;
}