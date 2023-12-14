#include <iostream>
using namespace std;
class Triangle
{
private:
    double side1, side2, side3;

public:
    Triangle(double a, double b, double c)
    {
        side1 = a;
        side2 = b;
        side3 = c;
    }
    int isTriangle()
    {
        if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
        {
            return 0; // Not a triangle
        }
        else if (side1 == side2 && side2 == side3)
        {
            return 1; // Equilateral
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            return 2; // Isosceles
        }
        else
        {
            return 3; // Scalene
        }
    };
    void TypeOfTriangle()
    {
        cout << "This is a ";
        switch (isTriangle())
        {
        case 0:
            cout << "not a valid triangle.";
            break;
        case 1:
            cout << "equilateral triangle.";
            break;
        case 2:
            cout << "an isosceles triangle.";
            break;
        case 3:
            cout << "a scalene triangle.";
            break;
        }
        cout << endl;
    };
};

int main()
{
    double a, b, c;

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    Triangle triangle(a, b, c);
    triangle.isTriangle();
    triangle.TypeOfTriangle();
    return 0;
}