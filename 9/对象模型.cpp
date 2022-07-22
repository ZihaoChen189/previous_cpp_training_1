#include<iostream>
using namespace std;

class BASE {
public:
	int a;
protected:
	int b;
private:
	int c;
};

class SON:public BASE {
public:
	int d;
};

void test() {
	cout << "size of SON" << sizeof(SON) << endl;
}

int main() {
	test();
	system("pause");
	return 0;
}