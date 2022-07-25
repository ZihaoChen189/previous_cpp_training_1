#include<iostream>
#include<string>
using namespace std;

class Person1 {
public:
	void showPerson1() {
		cout << "showPerson1" << endl;
	}
};

class Person2 {
public:
	void showPerson2() {
		cout << "showPerson2" << endl;
	}
};

template<class T>
class MyClass {
public:
	T obj;
	void func1() {
		obj.showPerson1();
	}
	void func2() {
		obj.showPerson2();
	}
};

void test() {
	MyClass<Person2>m;
	m.func2();

}

int main(int argc, char const *argv[]) {
	test();
	system("pause");
	return 0;
}
