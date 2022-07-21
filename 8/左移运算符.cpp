#include<iostream>
using namespace std;

class Person {
	friend ostream &operator<<(ostream &cout ,Person &p);
public:
	Person(int a, int b){
		m_A = a;
		m_B = b;
	}
private:
	int m_A, m_B;
};

ostream &operator<<(ostream &cout ,Person &p) {
	cout << "m_A = " << p.m_A << "m_B = " << p.m_B << endl;
	return cout;
}

void test() {
	Person p(10, 10);
	// p.m_A = 10;
	// p.m_B = 20;
	//cout << p.m_A << endl;
	// cout << p << endl;
	cout << p << "hello" << endl;
}

int main() {
	test();
	system("pause");
	return 0;
}