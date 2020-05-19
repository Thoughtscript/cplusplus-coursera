#include <iostream>
#include "BaseClass.h"

using namespace ExampleNamespace;
using namespace std;

void BaseClass::baseClassMethod() {
    num = 3;
    std::cout << "baseClassMethod() " << num << std::endl;
}

void BaseClass::superClassMethod() {
    num = 7;
    std::cout << "superClassMethod() override " << num << std::endl;
}

void BaseClass::superEquivalentMethod() {
    SuperClass::superClassMethod();
    std::cout << "superEquivalentMethod() called in BaseClass " << num << std::endl;
}