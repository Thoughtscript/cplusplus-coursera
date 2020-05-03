// simple classless executable with function.

#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main() {
    try {
        std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}