#include<iostream>
#include <string>
using namespace std;

template<class T1, class T2>n
class Person;

template<class T1, class T2>
void printPerson2(Person<T1, T2> p) {
	cout << "类外实现 name: " << p.name << " age: " << p.age << endl;
}

template<class T1, class T2>
class Person {
	friend void printPerson(Person<T1, T2> p) {
		cout << "name: " << p.name << " age: " << p.age << endl;
	}
	friend void printPerson2<>(Person<T1, T2> p);

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
	printPerson2(p);
}

int main() {
	test();
	system("pause");
	return 0;
}
