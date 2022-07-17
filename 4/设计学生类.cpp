#include <iostream>
using namespace std;


class Student {
	// 访问权限
public:  // 公共权限
	// 属性
	string student_name;
	int student_id;
	// 行为	
	void show_student_information() {
		cout << "姓名" << student_name << 
				"\n学号" << student_id << endl;
	}
	// 给姓名赋值
	void setName(string name) {
		student_name = name;
	}
	// 给学号赋值
	void setID(int id) {
		student_id = id;
	}
};


int main() {
	Student student1;
	// student1.student_name = "珈艺";
	student1.setName("珈艺");
	// student1.student_id = 00521;
	student1.setID(00521);
	student1.show_student_information();


	system("pause");
	return 0;
}