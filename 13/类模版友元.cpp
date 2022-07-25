#include<iostream>
#include <string>
using namespace std;

template<class T1, class T2>
class Person {
	friend void printPerson(Person<T1, T2> p) {
		cout << "name: " << p.name << " age: " << p.age << endl;
	}
public:
	Person(T1 name, T2 age) {
		this->name = name;
		this->age = age;
	}
private:
	T1 name;
	T2 age;
};

void test() {
	Person<string, int>p("紫灏", 18);
	printPerson(p);
}

int main() {
	test();
	system("pause");
	return 0;
}