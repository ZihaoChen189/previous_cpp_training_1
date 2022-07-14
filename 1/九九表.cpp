#include <iostream>
using namespace std;

int main() {
	// 核心关系：行数永远都大于列数
	// 列数 不会大于 行数
	// 列数 小于等于 当前行数
	for (int i = 1; i <= 9; i++) {  // 行 几层
		// cout << i << endl;
		for (int j = 1; j <= i; j++) { // 列 几个房间
			cout << j << "*" << i << "=" << j*i << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}