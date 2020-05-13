// example_class implementation
#include <iostream> // header in standard library
#include "ExampleClass.h" // header in custom library

using namespace ExampleNamespace; // now you don't have to prepend the namespace when calling methods, etc.
using namespace std;

// implement class method without class syntax here
void ExampleNamespace::ExampleClass::exampleMethod() {
    a = 5;
    b = 100;
    std::cout << "I'm a console out message from ExampleClass exampleMethod()" << endl;
}

// custom default constructor
ExampleNamespace::ExampleClass::ExampleClass() {
    a = 100;
    b = 100;
}

// custom constructor
ExampleNamespace::ExampleClass::ExampleClass(int _a, int _b) {
    a = _a;
    b = _b;
}