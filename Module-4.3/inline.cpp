#include <iostream>
using namespace std;
inline int multiply(int a, int b) {
    return a * b;
}

inline int cube(int a) {
    return a * a * a;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "The multiplication value of " << i << " and " << i + 1 << " is: " << multiply(i, i + 1) << std::endl;
        cout << "The cubic value of " << i << " is: " << cube(i) << std::endl;
    }

    return 0;
}