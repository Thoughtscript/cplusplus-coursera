// header file - think interface/abstract class skeleton - not likely to change and doesn't need to be recompiled
#ifndef Example_Class_One_H // pragma guard - used at compile time to prevent redundant appending/prepending of compiled code
#define Example_Class_One_H // if not already defined, add - otherwise it will be ignored

namespace ExampleNamespace {
    class ExampleClassOne {
        public:
            int num;
            void exampleMethodOne();
    };
}

#endif