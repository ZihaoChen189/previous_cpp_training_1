#include<iostream>
using namespace std;

int main() {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << "第一个元素为" << arr[0] << endl;
	int *p = arr;
	// cout << p << endl; 地址
	// cout << "利用指针访问" << *p << endl;
	// p++;
	// cout << "利用指针二次访问" << *p << endl;

	for (int i =0; i < 10; i++) {
		cout << *p << endl;
		p++;
	}

	system("pause");
	return 0;
}