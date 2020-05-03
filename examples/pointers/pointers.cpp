#include <iostream>

int main()
{
    try {
        // variable with value
        int num = 100;
        // note using std::cout explicitly here instead of the using keyword at top of file
        std::cout << num << std::endl;

        // pointer variable with a reference to the address of the variable above
        int *numAddress = &num;
        std::cout << numAddress << std::endl;

        // dereference the address to get the value back
        int derefNum = *numAddress;
        std::cout << derefNum << std::endl;

    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    // main() must always return an exit code
    return 0;

}
