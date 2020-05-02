// example_class implementation
#include <iostream> // header in standard library
#ifndef example_class.h // header in local directory with pragma guard
#define example_class.h // if not already defined, add

using namespace ExampleNamespace; // now you don't have to prepend the namespace when calling methods, etc.
using namespace std;

// scope resolution operator to implement header class methods
void example_class::example_method()
{
    cout << "I'm a console out message" << endl;
}
