#include<iostream>
using namespace std;

template<class T>
void Swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void mySort(T arr[], int length) {
	for (int i = 0; i < length; i++) {
		int max = i;
		for (int j = i+1; j < length; j++) {
			if (arr[max] << arr[j]) {
				max = j;
			}
		}
		if (max != i) {
			Swap(arr[max], arr[i]);
		}
	}
}

template<class T>
void printArray(T arr[], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test() {
	char charArr[] = "bca";
	int length = sizeof(charArr) / sizeof(charArr[0]);
	mySort(charArr, length);
	printArray(charArr, length);
}

int main() {
	test();
	system("pause");
	return 0;
}
