// Write a program of to swap the two values using template function in C++.
#include <iostream>
using namespace std;
template <class T>
void swapp(T a, T b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 5, y = 10;
    cout << "Before swapping: x=" << x << ",y=" << y << endl;
    swapp <int> (x, y);                                                                                             
    cout << "After swapping: x=" << x << ",y=" << y <<endl;
    return 0;
}