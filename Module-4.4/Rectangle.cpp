#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    virtual float getArea() = 0; // Pure virtual function
};

// Derived class
class Rectangle : public Shape
{
private:
    float width;
    float height;

public:
    Rectangle(float w, float h)
    {
        width = w;
        height = h;
    }

    float getArea()
    {
        return width * height;
    }
};

int main()
{
    Rectangle rectangle(5, 4);

    float area = rectangle.getArea();

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}