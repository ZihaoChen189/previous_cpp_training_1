#include<iostream>
#include <string>
using namespace std;

class CAL {
public:
	int getResult(string op) {
		if (op == "+") {
			return number1 + number2;
		} else if (op == "-") {
			return number1 - number2;
		} else if (op == "*") {
			return number1 * number2;
		}
		return 0;
	}
	int number1;
	int number2;
};



class ABSCAL {
public:
	virtual int getResult() {
		return 0;
	}
	int abstract_number1;
	int abstract_number2;
};

class ADDCAL:public ABSCAL {
	virtual int getResult() {
		return abstract_number1 + abstract_number2;
	}
};

class SUBCAL:public ABSCAL {
	virtual int getResult() {
		return abstract_number1 - abstract_number2;
	}
};

class MULCAL:public ABSCAL {
	virtual int getResult() {
		return abstract_number1 + abstract_number2;
	}
};

void test() {
	CAL calculator;
	calculator.number1 = 10;
	calculator.number2 = 20;
	cout << calculator.number1 << "+" << calculator.number2 << "=" << calculator.getResult("+") << endl;
	cout << calculator.number1 << "-" << calculator.number2 << "=" << calculator.getResult("-") << endl;
	cout << calculator.number1 << "*" << calculator.number2 << "=" << calculator.getResult("*") << endl;
}

void test1() {
	ABSCAL *abc = new ADDCAL;
	abc->abstract_number1 = 100;
	abc->abstract_number2 = 200;
	cout << abc->abstract_number1 << "+" << abc->abstract_number2 << "=" << abc->getResult() << endl;
	delete abc;
}

int main() {
	// test();
	test1();
	system("pause");
	return 0;
}
