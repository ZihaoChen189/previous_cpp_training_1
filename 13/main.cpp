#include<iostream>
using namespace std;
#include"person.hpp"

void test() {
	Person<string, int>p("紫灏", 18);
	p.show();
}

int main(int argc, char const *argv[]) {
	test();
	system("pause");
	return 0;
}