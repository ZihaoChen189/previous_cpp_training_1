#include<iostream>
using namespace std;

class JAVA {
public:
	void header() {
		cout << "首页，公开课，登录注册(公共头部)" << endl;
	}
	void footer() {
		cout << "帮助中心（公共底部）" << endl;
	}
	void left() {
		cout << "JAVA, PYTHON, C++（公共信息）" << endl;
	}
	void content() {
		cout << "JAVA视频" << endl;
	}
};

class PYTHON {
public:
	void header() {
		cout << "首页，公开课，登录注册(公共头部)" << endl;
	}
	void footer() {
		cout << "帮助中心（公共底部）" << endl;
	}
	void left() {
		cout << "JAVA, PYTHON, C++（公共信息）" << endl;
	}
	void content() {
		cout << "PYTHON视频" << endl;
	}
};

class CPP {
public:
	void header() {
		cout << "首页，公开课，登录注册(公共头部)" << endl;
	}
	void footer() {
		cout << "帮助中心（公共底部）" << endl;
	}
	void left() {
		cout << "JAVA, PYTHON, C++（公共信息）" << endl;
	}
	void content() {
		cout << "c++视频" << endl;
	}
};

void test01() {
	JAVA java;
	cout << "java下载视频的网页如下：" << endl;
	java.header();
	java.footer();
	java.left();
	java.content();
	cout << "-----------------" << endl;
	cout << "python下载视频的网页如下：" << endl;
	PYTHON python;
	python.header();
	python.footer();
	python.left();
	python.content();
	cout << "-----------------" << endl;
	cout << "c++下载视频的网页如下：" << endl;
	CPP c;
	c.header();
	c.footer();
	c.left();
	c.content();
}

int main() {
	test01();
	system("pause");
	return 0;
}