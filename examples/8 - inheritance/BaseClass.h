#ifndef BASE_CLASS_H
#define BASE_CLASS_H

#include "SuperClass.h"

namespace ExampleNamespace {
    class BaseClass: virtual public SuperClass {
        public:
            int num;
            void baseClassMethod();
            // Note that this may throw a warning - it can be ignored
            // warning: 'override' keyword is a C++11 extension [-Wc++11-extensions]
            void superClassMethod() override;
            void superEquivalentMethod();
    };
}

#endif