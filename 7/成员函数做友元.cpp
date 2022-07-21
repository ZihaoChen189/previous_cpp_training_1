#include<iostream>
#include<string>
using namespace std;

class Building;

class GoodGay {
public:
	GoodGay();
	void visit();  // 让visit访问Building中私有成员
	void visit2();
	Building * building;
};

class Building {
	friend void GoodGay::visit();
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

Building::Building() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::visit() {
	cout << "visit函数正在访问Building" << building->m_SittingRoom << endl;
	cout << "visit函数正在访问Building" << building->m_BedRoom << endl;
}

void GoodGay::visit2() {
	cout << "visit2函数正在访问Building" << building->m_SittingRoom << endl;
	// cout << "visit2函数正在访问Building" << building->m_BedRoom << endl;
}

void test() {
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main() {
	test();
	system("pause");
	return 0;
}