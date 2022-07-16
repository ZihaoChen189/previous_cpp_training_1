#include <iostream>
#include<string.h>
using namespace std;


struct Student {
	string name;
	int age;
	int score;
};

void printInformation(struct Student student_parameter) {
	cout << "function姓名" << student_parameter.name <<
			"\nfunction年龄" << student_parameter.age <<
			"\nfunction分数" << student_parameter.score << endl;

}


void printInformation(struct Student *student_parameter) {
	cout << "function姓名" << student_parameter->name <<
			"\nfunction年龄" << student_parameter->age <<
			"\nfunction分数" << student_parameter->score << endl;

}


int main() {
	struct Student s1 = {"紫灏", 18, 100};
	cout << "main姓名" << s1.name <<
			"\nmain年龄" << s1.age <<
			"\nmain分数" << s1.score << endl;

	printInformation(s1);

	struct Student s2 = {"珈艺", 20, 100};
	printInformation(&s2);
	system("pause");
	return 0;
}