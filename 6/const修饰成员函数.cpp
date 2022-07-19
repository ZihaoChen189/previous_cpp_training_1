#include<iostream>
using namespace std;

class Person {
public:
	void showPerson() const{
		//this->age = 100;
		this->age2 = 20;
	}
	int age;
	mutable int age2;
};

void test() {
	const Person p;
	p.age2 = 1 ;
}


int main() {
	test();
	system("pause");
	return 0;
}