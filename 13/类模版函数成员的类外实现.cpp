#include<iostream>
using namespace std;

template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age);
	void showPerson();
	// 	cout << "name: " << this->name << "age: " << this->age << endl;
	// }

	T1 name;
	T2 age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
	this->name = name;
	this->age = age;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson() {
	cout << "name: " << this->name << "age: " << this->age << endl;
}

void test() {
	Person<string, int>P("Tom", 20);
	P.showPerson();
}

int main(int argc, char const *argv[]) {
	test();
	system("pause");
	return 0;
}