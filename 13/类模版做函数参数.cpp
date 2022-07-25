#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age) {
		this->name = name;
		this->age = age;
	}
	void showPerson() {
		cout << "姓名: " << this->name << "年龄: " << this->age << endl; 
	}
	T1 name;
	T2 age;
};

void printPerson1(Person<string, int> &p) {
	p.showPerson();
}

template<class T1, class T2>
void printPerson2(Person<T1, T2> &p) {
	cout << "T1类型" << typeid(T1).name() << endl;
	p.showPerson();
}

template<class T>
void printPerson3(T &p) {
	p.showPerson();
}

void test() {
	Person<string, int>p("孙悟空", 100);
	printPerson3(p);
}

int main(int argc, char const *argv[]) {
	test();
	system("pause");
	return 0;
}
