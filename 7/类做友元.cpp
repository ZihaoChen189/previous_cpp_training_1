#include<iostream>
using namespace std;

class Building;

class GoodGay {
public:
	GoodGay();
	void visit();  // 参观函数访问Building中的属性
	Building * building;  // 目前编译器还没有设计Building的类。所以提前声明一下
};

class Building {
	// GoodGay类是本类的好朋友，可以访问本类中私有的成员
	friend class GoodGay;
public:
	Building();  // 函数可以在类外做一个实现
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

// 类外写一个成员函数
Building::Building() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

// 类外写一个成员函数
GoodGay::GoodGay() {
	building = new Building;  // 在堆区创建可以个对象
}

void GoodGay::visit() {
	cout << "好基友正在访问:" << building->m_SittingRoom << endl;
	cout << "好基友正在访问:" << building->m_BedRoom << endl;
}

void test() {
	GoodGay gg;
	gg.visit();
}

int main() {
	test();
	system("pause");
	return 0;
}