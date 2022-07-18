#include<iostream>
using namespace std;


class Person {
public:
	Person() {
		cout << "Person默认构造函数" << endl;
	}
	Person(int age, int height) {
		p_age = new int(age);
		p_height = new int(height);
		cout << "Person有参构造函数" << endl;
	}
	~Person() {
		cout << "Person析构函数" << endl;
		if (p_height != NULL) {
			cout << "height delete" << endl;
			delete p_height;
			p_height = NULL;
		}
		if (p_age != NULL) {
			cout << "age delete" << endl;
			delete p_age;
			p_age = NULL;
		}
	}
	Person(const Person &p) {
		cout << "Person拷贝构造函数" << endl;
		p_age = new int (*p.p_age);
		p_height = new int(*p.p_height);
	}
	int * p_age;
	int * p_height;
};


void test1() {
	Person p1(18, 179);
	cout << "p1 age is " << *p1.p_age << "p1 height is " << *p1.p_height << endl;
	Person p2(p1);
	cout << "p2 age is " << *p2.p_age << "p2 height is " << *p2.p_height << endl;
}


int main() {
	test1();
	system("pause");
	return 0;
}
