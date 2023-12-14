#include<iostream>
using namespace std;

class Students {
protected:
    int roll_number;
};

class Test : public Students {
protected:
    int subject1;
    int subject2;
};

class Result : public Test {
public:
    void set(int roll, int sub1, int sub2) {
        roll_number = roll;
        subject1 = sub1;
        subject2 = sub2;
    }

    void get() {
        cout << "Roll number: " << roll_number << endl;
        cout << "Marks in Subject 1: " << subject1 << endl;
        cout << "Marks in Subject 2: " << subject2 << endl;
    }
};

int main() {
    Result res;
    res.set(1, 85, 90);
    res.get();

    return 0;
}