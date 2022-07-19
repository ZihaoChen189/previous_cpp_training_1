#include<iostream>
using namespace std;

class Person {
public:
	void showClassName() {
		cout << "this is Person class" << endl;
	}
	void showAge() {
		cout << "age = " << this->age << endl;
	}
	int age;
};

void test() {
	Person * p = NULL;
	p->showClassName();
	p->showAge();
}


int main() {


	system("pause");
	return 0;
}