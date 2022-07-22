#include<iostream>
using namespace std;

class ANIMAL {
public:
	int a;
};

class SHEEP:virtual public ANIMAL {

};

class TUO:virtual public ANIMAL {

};

class SHEEPTUO:public SHEEP, public TUO {

};

void test() {
	SHEEPTUO s;
	s.SHEEP::a = 10;
	s.TUO::a = 20;

	cout << s.SHEEP::a << endl;
	cout << s.TUO::a << endl;
}

int main() {
	test();
	system("pause");
	return 0;
}