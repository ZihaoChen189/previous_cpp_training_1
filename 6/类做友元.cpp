#include<iostream>
using namespace std;
class Building;


class GoodGay {
public:
	GoodGay();
	void visit();
	Building * building;
};


class Building {
public:
	Building();
public:
	string this->settingRoom;
private:
	string this->bedRoom;
}
void goodGay(Building *b) {
	cout << "好基友的全局函数在访问" << b->settingRoom << endl;
	cout << "好基友的全局函数在访问" << b->bedRoom << endl;
}


Building::Building() {
	settingRoom = "客厅";
	bedRoom = "卧室";
};


GoodGay::GoodGay() {
	building = new Building;
};


int main() {
	test();
	system("pause");
	return 0;
}