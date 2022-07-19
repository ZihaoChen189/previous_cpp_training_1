#include<iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		this->age = age;
	}
	int age;
	Person PersonAddAge(Person &p) {
		this->age += p.age;
		return *this;
	}
};

void test() {
	Person p1(18);
	// cout << "p1年龄" << p1.age << endl;
	Person p2(10);
	p1.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2);
	cout << "p1年龄" << p1.age << endl;
}


int main() {
	test();
	system("pause");
	return 0;
}