#include <iostream>

int *example_pointer_method() {
    int i = 100;

    // Note this is syntactically valid since it is a reference variable.
    int &j = i;
    std::cout << j << '\n';

    // This is not syntactically valid since it returns a stack address out of stack.
    return &i;
}

int main() {
    try {
        int *examplePointer;
        examplePointer = example_pointer_method();
        std::cout << examplePointer << '\n';
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}