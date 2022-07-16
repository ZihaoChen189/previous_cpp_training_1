#include <iostream>
using namespace std;


struct Student {
	string student_name;
	int score;
};


struct Teacher {
	string teacher_name;
	struct Student student_array[3];
};


void allocateInformation(struct Teacher teacher_array[], int length) {
	string name_seed = "ABC";
	for (int i = 0; i < length; ++i)
	{
		teacher_array[i].teacher_name = "Teacher_";
		teacher_array[i].teacher_name += name_seed[i];

		for (int j = 0; j < 3; ++j) {
			teacher_array[i].student_array[j].student_name = "Student_";
			teacher_array[i].student_array[j].student_name += name_seed[j];
			int random_score = rand() % 61 + 40; // 0~60  -> 0~100
			teacher_array[i].student_array[j].score = random_score;
		}

	}


}


void printInformation(struct Teacher teacher_array[], int length) {
	for (int i = 0; i < length; ++i)
	{
		cout << "老师姓名" << teacher_array[i].teacher_name << endl;
		for (int j = 0; j < 3; ++j)
		{
			cout << "\t学生姓名" << teacher_array[i].student_array[j].student_name << 
				    "考试分数" << teacher_array[i].student_array[j].score << endl;
		}
	}
}


int main() {
	struct Teacher teacher_array[3];
	int length = sizeof(teacher_array) / sizeof(teacher_array[0]);
	allocateInformation(teacher_array, length);
	printInformation(teacher_array, length);
	system("pause");
	return 0;
}