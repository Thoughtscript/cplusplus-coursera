// example_class implementation
#include "example_class.h" // header in local directory
#include <iostream> // header in standard library

using namespace ExampleNamespace; // now you don't have to prepend the namespace when calling methods, etc.
using namespace std;

// scope resolution operator to implement header class methods
void example_class::example_method()
{
    cout << "I'm a console out message" << endl;
}
