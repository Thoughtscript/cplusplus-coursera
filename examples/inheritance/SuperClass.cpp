#include <iostream>
#include "SuperClass.h"

using namespace ExampleNamespace;
using namespace std;

void SuperClass::superClassMethod() {
    num = 500;
    std::cout << "superClassMethod() called in SuperClass " << num << std::endl;
}