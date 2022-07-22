#include<iostream>
using namespace std;

class BASE1 {
public:
	int a;
protected:
	int b;
private:
	int c;
};

class BASE2 {
public:
	int a;
protected:
	int b;
private:
	int c;
};

class BASE3 {
public:
	int a;
protected:
	int b;
private:
	int c;
};

class SON1:public BASE1 {
public:
	void func() {
		a = 10;
		b = 20;
		// c = 30;
	}
};

class SON2:protected BASE2{
public:
	void func() {
		a = 1000;
		b = 2000;
		// c = 3000;
	}
};

class SON3:private BASE3{
public:
	void func() {
		a = 1000;
		b = 2000;
		c = 3000;
	}
};

void test01() {
	SON1 s1;
	s1.a = 100;
	// s1.b = 200;
}

void test02() {
	SON2 s2;
	// s2.a = 1000;
}

void test03() {
	SON3 s3;
	s3.a = 100;
}



int main() {
	test01();
	system("pause");
	return 0;
}
