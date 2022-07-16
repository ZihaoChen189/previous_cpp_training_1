#include <iostream>
using namespace std;
#include<string.h>
struct Student {
	string name;
	int age;
	int score;
} s3;

int main() {
	struct Student s1;
	s1.name = "珈艺";
	s1.age = 18;
	s1.score = 98;
	cout << "name:" << s1.name << "age:" << s1.age << "s1.score" << endl;
	struct Student s2 = {"紫灏", 18, 99};
	cout << "name:" << s1.name << "age:" << s1.age << "s1.score" << endl;
	s3.name = "高天";
	cout << "name:" << s3.name << endl;
	system("pause");
	return 0;
}