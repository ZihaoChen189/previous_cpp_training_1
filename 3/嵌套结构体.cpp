#include <iostream>
#include<string.h>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};


struct Teacher {
	int id;
	string name;
	int age;
	struct Student s;
};


int main() {
	Teacher t1 = {1000, "杨平", 50};
	t1.s.age = 20;
	t1.s.score = 70;
	t1.s.name = "紫灏";
	cout << "老师姓名" << t1.name << 
		 	"\n老师编号" << t1.id <<
		 	"\n老师年龄" << t1.age <<
		 	"\n辅导的学生姓名" << t1.s.name <<
		 	"\n学生的年龄" << t1.s.age <<
		 	"\n学生的分数" << t1.s.score;
	system("pause");
	return 0;
}