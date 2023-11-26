// WAP to create simple calculator using class and object oriented programming in C++.
#include <iostream>
using namespace std;
class Calculator
{
private:
    int num1, num2;

public:
    void setNum(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    int add()
    {
        return num1 + num2;
    }
    int subtract()
    {
        return num1 - num2;
    }
    int multiply()
    {
        return num1 * num2;
    }
    int divide()
    {
        if (num2 == 0)
        {
            cout << "Error! Division by zero isn't posible.";
            return 0;
        }
        else
        {
            return num1 / num2;
        }
    }
};
int main()
{
    Calculator calc;
    int choice, num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter operation to perform: " << endl;
    cout << "1.Addition" << endl;
    cout << "2.Subtraction" << endl;
    cout << "3.Multiplication" << endl;
    cout << "4.Division" << endl;
    cin >> choice;
    calc.setNum(num1, num2);
    switch (choice)
    {
    case 1:
        cout << "Result: " << calc.add() << endl;
        break;
    case 2:
        cout << "Result: " << calc.subtract() << endl;
        break;
    case 3:
        cout << "Result: " << calc.multiply() << endl;
        break;
    case 4:
        cout << "Result: " << calc.divide() << endl;
        break;
    default:
        cout << "Invalid choice.";
        break;
    }
    return 0;
}