// simple classless executable with function.

#include <iostream>
#include "BaseClass.h"

using namespace ExampleNamespace;

int main() {
    try {
        ExampleNamespace::BaseClass bc;
        bc.baseClassMethod();
        bc.superClassMethod();
        bc.superEquivalentMethod();
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}