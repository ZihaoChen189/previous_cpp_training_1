#include<iostream>
using namespace std;


class Person {
public:
	Person() {
		cout << "Person默认构造函数" << endl;
	}
	~Person() {
		cout << "Person析构函数" << endl;
	}
	Person(int a) {
		age = a;
	}
	// Person(const Person & p) {
	// 	cout << "Person拷贝构造函数" << endl;
	// 	age = p.age;
	// }
	int age;

};

void test1() {
	Person p;
	p.age = 18;

	Person p2(p);
	cout << "p2 age" << p2.age << endl;
}
int main() {
	test1();
	system("pause");
	return 0;
}