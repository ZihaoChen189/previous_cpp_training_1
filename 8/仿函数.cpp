#include<iostream>
using namespace std;

class MyPrint {
public:
	void operator()(string text) {
		cout << text << endl;
	}

};

void MyPrint02(string test) {
	cout << test << endl;
} 
void test() {
	MyPrint myprint;
	myprint("hello world");
	MyPrint02("hello skell");
}

int main() {
	test();
	system("pause");
	return 0;
}