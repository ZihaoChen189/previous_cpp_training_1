#include <iostream>
using namespace std;


struct Hero {
	string name;
	int age;
	string sex;
};

void bubble_sort(struct Hero hero_array[], int length) {
	for (int i = 0; i < length - 1; ++i)
	{
		for (int j = 0; j < length - i - 1; ++j)
		{
			if (hero_array[j].age > hero_array[j+1].age) {
				struct Hero temp = hero_array[j];
				hero_array[j] = hero_array[j+1];
				hero_array[j+1] = temp;
			}
		}
	}
}


void printInformation(struct Hero hero_array[], int length) {
	for (int i = 0; i < length; ++i) {
	 	cout << "姓名:" << hero_array[i].name <<
	 			"\t年龄:" << hero_array[i].age <<
	 			"\t性别:" << hero_array[i].sex << endl;
	 }
}


int main() {
	struct Hero hero_array[3] = {
		{"刘备", 20, "男"},
		{"关羽", 20, "男"},
		{"张飞", 20, "男"}
	};

	int length = sizeof(hero_array) / sizeof(hero_array[0]);

	bubble_sort(hero_array, length);
	printInformation(hero_array, length);

	system("pause");
	return 0;
}