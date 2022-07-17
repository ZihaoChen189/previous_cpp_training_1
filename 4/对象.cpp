#include <iostream>
using namespace std;

const double PI = 3.14;


class Circle {
	// 访问权限
public:  // 公共权限
	// 属性
	int circle_r;
	// 行为	
	double calculate_c() {
		return 2*PI*circle_r;
	}
};


int main() {
	Circle c1;
	c1.circle_r = 10;
	cout << "圆的周长" << c1.calculate_c() << endl;


	system("pause");
	return 0;
}