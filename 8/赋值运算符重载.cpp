#include<iostream>
using namespace std;

class Person {
public:
	// Person& operator=(Person &p) {
	// 	// 先判断堆区是否有属性，有的话，先释放干净，之后深拷贝
	// 	if(m_Age != NULL) {
	// 		delete m_Age;
	// 		m_Age = NULL;
	// 	}
	// 	m_Age = new int(*p.m_Age);
	// 	return *this;
	// }
	Person(int age) {
		m_Age = new int(age);
	}
	~Person() {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}
	int *m_Age;
};

void test() {
	Person p1(3);
	Person p2(20);
	cout << "p2年龄为" << *p2.m_Age << endl;
	p2 = p1;
	cout << "p2年龄为" << *p2.m_Age << endl;
}
int main() {
	test();
	system("pause");	
	return 0;
}