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

};


void test1() {
	Person p1;
}


int main() {
	Person p1;
	// test1();
	// system("read");
	system("pause");
	return 0;
}