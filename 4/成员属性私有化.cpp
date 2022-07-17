#include <iostream>
using namespace std;

class Person {
public:
	void setName(string p_name) {
		name = p_name;
	}
	string getName() {
		return name;
	}
private:
	string name; // 可读可写
	int age;  // 只读
	string lover;  // 只写
};


int main() {
	Person p1;
	p1.setName("紫灏");
	cout << "姓名为" << p1.getName() << endl;
	system("pause");
	return 0;
}

