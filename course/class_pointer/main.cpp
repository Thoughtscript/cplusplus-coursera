#include <iostream>
// note that the include is for ExampleClass.h not ExampleClass.cpp
#include "ExampleClass.h"

using namespace ExampleNamespace; // now you don't have to prepend the namespace when calling methods, etc.
using namespace std;

// Method to return a pointer to ExampleClass that doesn't throw a memory error
// It returns a variable declared in the heap

ExampleClass* pointerMethod() {
    std::cout << "Inside pointerMethod() " << std::endl;
    return new ExampleClass;
}

int main() {
    try {
        ExampleClass* c;
        c = pointerMethod();

        std::cout << c << std::endl;
        std::cout << (*c).a << std::endl;
        std::cout << (*c).b << std::endl << std::endl;

        // Access and call method from pointer on heap
        c -> exampleMethod();

        std::cout << c << std::endl;
        std::cout << (*c).a << std::endl;
        std::cout << (*c).b << std::endl << std::endl;

        // Access attributes from pointer on heap and set to new values
        c -> b = 100;
        c -> a = 1000;

        std::cout << c << std::endl;
        std::cout << (*c).a << std::endl;
        std::cout << (*c).b << std::endl << std::endl;

        // Remove from heap
        delete c;

    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}