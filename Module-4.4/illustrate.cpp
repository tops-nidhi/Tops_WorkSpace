#include<iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor Called! \n";
    }
};

class SubBase: public Base {
public:
    SubBase() {
        cout << "SubBase Constructor Called! \n";
    }
};

class Derived: public SubBase {
public:
    Derived() {
        cout << "Derived Constructor Called! \n";
    }
};

int main() {
    Derived obj;

    return 0;
}