// example_class implementation
#include <iostream> // header in standard library
#include "ExampleClass.h" // header in custom library

using namespace ExampleNamespace; // now you don't have to prepend the namespace when calling methods, etc.
using namespace std;

// implement class method without class syntax here
void ExampleNamespace::ExampleClass::exampleMethod() {
    a = 5;
    std::cout << "I'm a console out message from ExampleClassOne exampleMethodOne()" << endl;
}