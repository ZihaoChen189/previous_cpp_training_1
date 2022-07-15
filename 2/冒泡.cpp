#include<iostream>
using namespace std;
// 总轮数 = 元素个数 - 1
// 每轮对比次数 = 元素个数 - 轮数 - 1
int main() {
	/*
如果一共有九个数字的话
	第零轮对比 8对 数字
	把最大的数字找出来
	第一轮 只需要对比8个数字 7对 数字
	把第二大的找出来
	二 6对
	三 5对
	四 4对
	五 3对
	六 2对
	七 1对
	*/
	int arr[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
	cout << "排序前" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	// 总轮数 = 元素个数 - 1
	// 每轮对比次数 = 元素个数 - 轮数 - 1
	for (int i = 0; i < 9 - 1; i++) {
		for (int j = 0; j < 9 - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout << "排序后" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}