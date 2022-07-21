#include <iostream>
using namespace std;

class MyInteger {
	friend ostream &operator<<(ostream &cout, MyInteger myint);
public:
	MyInteger() {
		m_Number = 0;
	}
	MyInteger &operator++() {
		m_Number++;
		return *this;
	}
	// int代表了一个站位参数
	MyInteger operator++(int) {
		MyInteger temp = *this;
		m_Number++;
		return temp;
	}
private:
	int m_Number;
};

ostream& operator<<(ostream &cout, MyInteger myint) {
	cout << myint.m_Number;
	return cout;
}

// void test() {
// 	MyInteger myint;
// 	cout << ++myint << endl;
// }

void test01() {
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}