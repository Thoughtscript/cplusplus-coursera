#include <iostream>
#include "ExampleClass.h"

using namespace ExampleNamespace;
using namespace std;

int main() {
    try {
        ExampleClass ec; // custom default constructor
        std::cout << &ec << " with " << ec.a << " " << ec.b << std::endl;

        ExampleClass ecc(1,1); // custom constructor
        std::cout << &ecc << " with " << ecc.a << " " << ecc.b << std::endl;

        ExampleClass * eccc = new ExampleClass; // pointer with custom default constructor
        std::cout << eccc << " with " << (*eccc).a << " " << (*eccc).b << std::endl;
        delete eccc;

        ExampleClass * ecccc = new ExampleClass(111,111); // pointer with custom constructor
        std::cout << ecccc << " with " << (*ecccc).a << " " << (*ecccc).b << std::endl;
        delete ecccc;

        // copies - keeps different addresses
        ExampleClass copyExample;
        copyExample.a = 1000;
        copyExample.b = 1000;

        ExampleClass otherCopyExample;
        otherCopyExample.a = 1111;
        otherCopyExample.b = 1111;

        std::cout << copyExample.a << " " << copyExample.b  << " at: " << &copyExample << " " << otherCopyExample.a << " " << otherCopyExample.b << " at: " << &otherCopyExample << std::endl;
        copyExample = otherCopyExample;
        std::cout << copyExample.a << " " << copyExample.b  << " at: " << &copyExample << " " << otherCopyExample.a << " " << otherCopyExample.b << " at: " << &otherCopyExample << std::endl;

        // memory assignment - note how the memory addresses for the variables remain distinct despite assigning their pointers to each other.
        ExampleClass x;
        x.a = 111;
        x.b = 111;
        ExampleClass * xx = &x;

        ExampleClass y;
        y.a = 1000;
        y.b = 1000;
        ExampleClass * yy = &y;

        std::cout << x.a << " " << x.b  << " at: " << &x << " " << xx << " " << y.a << " " << y.b << " at: " << &y << " " << yy << std::endl;
        xx = yy;
        std::cout << x.a << " " << x.b  << " at: " << &x << " " << xx << " " << y.a << " " << y.b << " at: " << &y << " " << yy << std::endl;
        std::cout << (*xx).a << " " << (*xx).b << " at: " << xx << " " << (*yy).a << " " << (*yy).b << " at: " << yy << std::endl;

        // references
        ExampleClass refCopyExample;
        refCopyExample.a = 1000;
        refCopyExample.b = 1000;

        ExampleClass & otherRefCopyExample = refCopyExample;

        std::cout << refCopyExample.a << " " << refCopyExample.b  << " at: " << &refCopyExample << " " << otherRefCopyExample.a << " " << otherRefCopyExample.b << " at: " << &otherRefCopyExample << std::endl;


    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}