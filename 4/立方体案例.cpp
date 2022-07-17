#include <iostream>
using namespace std;


class Cube {

public:
	void setLength(int length_parameter) {
		length = length_parameter;
	}
	int getLength() {
		return length;
	}
	void setWeight(int weight_parameter) {
		weight = weight_parameter;
	}
	int getWeight() {
		return weight;
	}
	void setHeight(int height_parameter) {
		height = height_parameter;
	}
	int getHeight() {
		return length;
	}
	int calculateS() {
		return 2*length*weight + 2*weight*height + 2*weight*height;
	}
	int calculateV() {
		return length*weight*height;
	}
	bool isSameByClass(Cube &c) {
		if (length == c.getLength() &&
			weight == c.getWeight() &&
			height == c.getHeight() ) {
			return true;
		}
		return false;
	}

private:
	int length;
	int weight;
	int height;
};


bool Same(Cube &c1, Cube &c2) {
		if (c1.getLength() == c2.getLength() &&
			c1.getHeight() == c2.getHeight() &&
			c1.getWeight() == c2.getWeight()) {
			return true;
		} 
		return false;
	}


int main() {
	Cube c1;
	c1.setLength(10);
	c1.setWeight(10);
	c1.setHeight(10);
	Cube c2;
	c2.setLength(10);
	c2.setWeight(10);
	c2.setHeight(10);

	bool ret;
	ret = Same(c1, c2);
	if (ret) {
		cout << "相等" << endl;
	} else {
		cout << "不等" << endl;
	}


	bool ret2 = c1.isSameByClass(c2);
	if (ret2) {
		cout << "相等" << endl;
	} else {
		cout << "不等" << endl;
	}
	
	// cout << "c1面积" << c2.calculateS() << endl;
	// cout << "c1体积" << c2.calculateV() << endl;

	system("pause");
	return 0;
}

