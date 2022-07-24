#include<iostream>
#include<fstream>
using namespace std;

class Person {
public:
	char m_Name[64];
	int m_age;
};

void test() {
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if ( !ifs.is_open() ) {
		cout << "妈耶 失败了" << endl;
		return 0;
	}
	Person p;
	ifs.read((char *)&p, sizeof(Person));
	cout << "姓名:" << p.m_Name << "年龄" << p.m_age;
	ifs.close();
}

	

int main() {
	test();
	system("pause");
	return 0;
}