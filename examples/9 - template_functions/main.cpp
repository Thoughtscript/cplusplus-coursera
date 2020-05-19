#include <iostream>
#include "ExampleClass.h"

using namespace std;
using namespace ExampleNamespace;

template<typename V>
V standaloneExampleMethod(V x) {
    return x;
}

int main() {
    try {

        ExampleClass<string> ec;
        string random = "I am a random string";
        ec.flexibleVar = random;
        ec.num = 0;

        ec.exampleMethodOne();
        ec.flexibleMethodOne("text");
        ec.flexibleMethodTwo("hello","world");
        std::cout << "My values are " << ec.flexibleVar << " " << ec.num  << '\n';

        ExampleClass<int> ecc;
        ecc.flexibleVar = 5;
        ecc.num = 100;
        ecc.flexibleMethodTwo(1,2);
        std::cout << "My values are " << ecc.flexibleVar << " " << ecc.num  << '\n';

        string a = standaloneExampleMethod("hello");
        int b = standaloneExampleMethod(5);
        std::cout << "Flexible template values " << a << " " << b  << '\n';

    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}