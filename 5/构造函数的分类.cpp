#include<iostream>
using namespace std;

class Person{
public:
	Person() {
		cout << "Person构造函数的调用" << endl;
	}
	~Person() {
		cout << "西沟函数的调用" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person有参构造函数的调用" << endl;
	}
	Person(const Person &p) {
		cout << "Person拷贝构造函数的调用" << endl;
		age = p.age;
	}
	int age;
};


void test1() {
	Person p1;
	Person p2(10);
	Person p3(p2);
}


int main() {
	test1();
	system("pause");
	return 0;
}