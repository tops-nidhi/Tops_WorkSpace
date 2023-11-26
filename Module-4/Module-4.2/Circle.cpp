// WAP to find the area and circumference of the circle.
#include <iostream>
#include <cmath>

class Circle {
    private:
        double radius;

    public:
        Circle(double r) {
            radius = r;
        }

        double Area() {
            return M_PI * radius * radius;
        }

        double Circumference() {
            return 2 * M_PI * radius;
        }
};

int main() {
    Circle circle1(5);

    std::cout << "Circle1 Area: " << circle1.Area() << std::endl;
    std::cout << "Circle1 Circumference: " << circle1.Circumference() << std::endl;

    return 0;
}