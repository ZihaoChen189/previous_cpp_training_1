#include<iostream>
using namespace std;

class Person {
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
	string name;
	int age;

};

template<class T>
bool myCompare(T &a, T &b) {
	if (a == b) {
		return true;
	} else {
		return false;
	}
}

template<> bool myCompare(Person &p1, Person &p2) {
	if (p1.name == p2.name && p1.age == p2.age) {
		return true;
	} else {
		return false;
	}
}	

void test() {
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);

	if (ret) {
		cout << "a == b" << endl;
	} else {
		cout << "a!=b" << endl;
	}
}

void test02() {
	Person p1("珈艺", 18);
	Person p2("紫灏", 19);
	bool ret = myCompare(p1, p2);
	if (ret) {
		cout << "p1 == p2" << endl;
	} else {
		cout << "p1!=p2" << endl;
	}

}

int main(int argc, char const *argv[]) {
	test02();
	system("pause");
	return 0;
}