#include<iostream>
#include<fstream>
using namespace std;

void test() {
	ifstream ifs;
	ifs.open("/Users/logic/Desktop/cpp/11/test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "坏了！！！出错了！" << endl;
		return;
	}
	// char buf1[1204] = {0};
	// while (ifs >> buf1) {
	// 	cout << buf1 << endl;
	// }

	// char buf[1024] = {0};
	// while (ifs.getline( buf, sizeof(buf) )) {
	// 	cout << buf << endl;
	// }

	// string buf;
	// while (getline(ifs, buf) ) {
	// 	cout << buf << endl;
	// }
	char c;
	while ( (c = ifs.get()) != EOF ) {
		cout << c;
	}
	ifs.close();
}

int main() {
	test();
	system("pause");
	return 0;
}