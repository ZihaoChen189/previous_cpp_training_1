#include<iostream>
using namespace std;

template<class NameType, class AgeType>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->name = name;
		this->age = age;
	}
	
	void showPerson() {
		cout << "name: " << this->name << "age: " << this->age << endl;

	}

	NameType name;
	AgeType age;
};

void test() {
	Person<string, int> p1("郭珈艺", 17);
	p1.showPerson();

}

int main(int argc, char const *argv[]) {
	test();
	system("pause");
	return 0;
}