#include<iostream>
using namespace std;

template<class T>
class Base{
	T m;

};

class Son:public Base<int> {

};

template<class T1, class T2>
class Son2:public Base<T2> {
	T1 obj;
};

void test() {
	Son2<int, char>s2;
}

int main(int argc, char const *argv[]) {
	test();
	system("pause");
	return 0;
}