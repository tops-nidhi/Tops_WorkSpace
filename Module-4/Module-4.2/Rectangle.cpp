// WAP to calculate the rectangle's area and perimeter using user input.
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l = 0, double w = 0)
    {
        length = l;
        width = w;
    }

    double getArea()
    {
        return length * width;
    }

    double getPerimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    double len, wid;
    cout << "Enter length and width of the rectangle: ";
    cin >> len >> wid;

    Rectangle rect(len, wid);

    cout << "Area of the rectangle: " << rect.getArea() << endl;
    cout << "Perimeter of the rectangle: " << rect.getPerimeter() << endl;

    return 0;
}