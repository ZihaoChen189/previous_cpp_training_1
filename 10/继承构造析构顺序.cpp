#include<iostream>
using namespace std;

class BASE {
public:
    BASE() {
    cout << "Base构造函数" << endl;
    }
    ~BASE() {
    cout << "Base析构函数" << endl;
    }
};

class SON:public BASE {
public:
    SON() {
    cout << "Son构造函数" << endl;
    }
    ~SON() {
    cout << "Son析构函数" << endl;
    }
};

void test() {
    BASE b;
    SON s;
}

int main() {
    test();
    system("pause");
    return 0;
}
