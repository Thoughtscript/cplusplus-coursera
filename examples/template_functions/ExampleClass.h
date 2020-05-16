#include <iostream>

#ifndef EXAMPLE_CLASS_H
#define EXAMPLE_CLASS_H

using namespace std;

namespace ExampleNamespace {

    // only one declared
    template<typename T> class ExampleClass {
    public:
        int num;
        T flexibleVar;

        // best to define these in the same class with template<typename T> declaration
        void exampleMethodOne() {
            cout << "exampleMethodOne() " << flexibleVar << " " << typeid(flexibleVar).name() << endl;
        }

        T flexibleMethodOne(T a) {
            cout << "flexibleMethodOne() " << a << " " << typeid(a).name() << endl;
            return a;
        }

        T flexibleMethodTwo(T a, T b) {
            T result = a + b;
            cout << "flexibleMethodTwo() " << result << " " << typeid(result).name() << endl;
            return a + b;
        }
    };
}

#endif