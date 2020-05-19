// example_class implementation
#include <iostream> // header in standard library
#include "ExampleClassOne.h" // header in custom library
#include "ExampleClassTwo.h" // header in custom library

using namespace ExampleNamespace; // now you don't have to prepend the namespace when calling methods, etc.
using namespace std;

// implement class method without class syntax here
void ExampleClassOne::exampleMethodOne() {
    cout << "I'm a console out message from ExampleClassOne exampleMethodOne()" << endl;
}

void ExampleClassTwo::exampleMethodTwo() {
    cout << "I'm a console out message from ExampleClassTwo exampleMethodTwo()" << endl;
}

// executable code (must be wrapped in main method)
int main() {
    try {
        ExampleClassOne exampleOne;
        cout << "See the random number assigned here: " << exampleOne.num << endl;
        exampleOne.num = 2;
        exampleOne.exampleMethodOne();
        cout << exampleOne.num << endl;

        ExampleClassTwo exampleTwo;
        exampleTwo.num = 54;
        exampleTwo.exampleMethodTwo();
        cout << exampleTwo.num << endl;

    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}