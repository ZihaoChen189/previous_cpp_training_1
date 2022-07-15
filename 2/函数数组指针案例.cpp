#include<iostream>
using namespace std;


void bubble_sort(int *arr, int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

}


void printArray(int *arr, int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;
	}
}


int main() {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int length = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, length);
	printArray(arr, length);
	system("pause");
	return 0;
}