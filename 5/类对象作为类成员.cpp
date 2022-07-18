#include<iostream>
#include<string>
using namespace std;


class Phone {
public:
	Phone(string pparameter) {
		pname = pparameter;
	}
	string pname;
};


class Person {
public:
	Person(string person_parameter, string phone_name):person_name(person_parameter),person_phone(phone_name) {

	}
	string person_name;
	Phone person_phone;
};


void test() {
	Person p("紫灏", "iPhone12pro");
	cout << p.person_name << p.person_phone.pname << endl;
}


int main() {
	test();
	system("pause");
	return 0;
}