#include <iostream>
using namespace std;

class Calculator {
public:
int x, y;
    Calculator(int a, int b) {
        this->x = a;
        this->y = b;
    }

    int add() {
        return x + y;
    }

    int subtract() {
        return x - y;
    }

    double divide() {
        if (y == 0) {
            cout<< "Division by zero is not allowed.";
        }
        return (double)x / (double)y;
    }

    int multiply() {
        return x * y;
    }

private:
    int x, y;
};

int main() {
    Calculator calc(5, 10);

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Division: " << calc.divide() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;

    return 0;
}