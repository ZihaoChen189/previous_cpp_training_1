#include<iostream>
using namespace std;

class Building {
	friend void goodGay(Building *p);
public:
	Building() {
		this->settingRoom = "客厅";
		this->bedRoom = "卧室";
	}
	string settingRoom;
private:
	string bedRoom;
};


void goodGay(Building *b) {
	cout << "好基友的全局函数在访问" << b->settingRoom << endl;
	cout << "好基友的全局函数在访问" << b->bedRoom << endl;
}

void test() {
	Building b;
	goodGay(&b);
}


int main() {
	test();
	system("pause");
	return 0;
}