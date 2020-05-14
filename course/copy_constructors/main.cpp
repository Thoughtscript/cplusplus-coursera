#include <iostream>
#include "Cube.cpp"

using namespace std;

// Reviewing copy constructors and assignment

int main() {
    try {
        // Copy constructor called - a is being initialized
        Cube b(5);
        Cube a = b;
        std::cout << a.num << " vs: " <<  b.num << std::endl;
        std::cout << &a << " vs: " <<  &b << std::endl;

        // Copy constructor not called - both initialized
        Cube c, d(10);
        c = d;
        std::cout << c.num << " vs: " <<  d.num << std::endl;
        std::cout << &c << " vs: " <<  &d << std::endl;

        // Otherwise no difference - addresses will vary but values will be the same

    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}