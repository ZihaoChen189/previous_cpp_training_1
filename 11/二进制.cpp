#include<iostream>
#include<fstream>
using namespace std;

class Person {
public:
	char m_Name[64];
	int m_age;
};

void test() {
	ofstream ofs;
	ofs.open("person.txt", ios::binary | ios::out);
	// ofstream ofs("person.txt", ios::binary | ios::out);
	Person p = {"郭珈艺", 18};

	ofs.write( (const char *)&p, sizeof(Person));
	ofs.close();
}

	

int main() {
	test();
	system("pause");
	return 0;
}