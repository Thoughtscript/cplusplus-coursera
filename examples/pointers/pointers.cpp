#include <iostream>

int main()
{
    try {
        // variable with value
        int num = 100;
        // note using std::cout explicitly here instead of the using keyword at top of file
        std::cout << "num " << num << std::endl;

        // pointer variable with a reference to the address of the variable above
        int *numAddress = &num;
        std::cout << "numAddress " << numAddress << std::endl;

        // dereference the address to get the value back
        int derefNum = *numAddress;
        std::cout << "derefNum " << derefNum << std::endl;

        *numAddress = 42;
        std::cout << "numAddress " << numAddress << std::endl;
        std::cout << "*numAddress " << *numAddress << std::endl;

        // heap example
        // declare a pointer variable and allocated a memory address in heap
        int * heapVariable = (int*) malloc(1);
        // assign a value to the pointer variable that doesn't exceed the specified size
        heapVariable[0] = 45;
        std::cout << "heap assigned value " << heapVariable[0] << std::endl;
        std::cout << "heap pointer variable / address " << heapVariable << std::endl;
        // return the allocated memory block back to the heap
        free(heapVariable);

    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    // main() must always return an exit code
    return 0;

}
