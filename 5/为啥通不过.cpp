#include<iostream>
using namespace std;


class Phone {
public:
	Phone(string pName) {
		m_PName = pName;
	}
	string m_PName;
};


class Person {
public:
	// Phone m_Phone = pName
	Person(string name, string pName):m_Name(name), m_Phone(pName) {

	}
	string m_Name;
	Phone m_Phone;
};


void test() {
	Person p("暗暗", "aa");
	cout << p.m_Name << p.m################################################## << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}