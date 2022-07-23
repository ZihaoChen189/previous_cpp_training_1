#include<iostream>
using namespace std;

class Animal {
public:
	virtual  void speak() {
		cout << "动物在说话" << endl;
	} 
};

class Dog:public Animal {
	void speak() {
		cout << "小狗在说话" << endl;
	}
};

class Cat:public Animal {
public:
	void speak() {
		cout << "小猫在说话" << endl;
	}
};

// 执行说话的函数
// 地址早绑定 在编译阶段就确定了函数的地址
// 如果想执行让猫说话，这个函数地址就不能提前绑定，运行阶段再绑定
void doSpeak(Animal &animal) {
	animal.speak(); // 不管穿什么，都会走Animal的函数！！！
}

void test() {
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}

void test02() {
	cout << "sizeof" << sizeof(Animal) << endl;
}

int main() {
	test();
	test02();
	system("pause");
	return 0;
}
