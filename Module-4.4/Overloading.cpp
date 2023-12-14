#include <iostream>
using namespace std;
class Overloading
{
public:
    char calc(char a, char b)
    {
        return a + b;
    }

    int calc(int a, int b)
    {
        return a - b;
    }

    float calc(float a, float b)
    {
        return a * b;
    }

    float calc(double a, double b)
    {
        return (float)a / b;
    }
};

int main()
{
    Overloading obj;

    cout << "The sum is: " << obj.calc('a', 'b') << endl;
    cout << "The subtraction is: " << obj.calc(2, 20) << endl;
    cout << "The multiplication is: " << obj.calc(4.5f, 3.2f) << endl;
    cout << "The division is: " << obj.calc(4.2, 3.0) << endl;
    cout << "Invalid operation!" << endl;
    return 0;
}