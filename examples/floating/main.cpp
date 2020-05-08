#include <iostream>
using namespace std;

int main() {
    try {
        // declare floating point precision to four
        float x(1.0001);
        std::cout << "Float " << x << '\n';

        // declare floating point precision to seven
        // Note that this will round to precision 5
        float y(1.0100290808);
        std::cout << "Float rounded to precision 5: " << y << '\n';

        // declare double point precision to four - it will round to nearest integer dropping precision
        double z(1.00013);
        std::cout << "Double " << z << '\n';
        z = 0.0000;
        std::cout << "Double rounded down to precision 0: " << z << '\n';
        z = 0.12392838;
        std::cout << "Double precision is not rounded down! " << z << '\n';
        z = 0.0000000000000002;
        std::cout << "Double is better for high precision: " << z << '\n';

        // using printf defaults for float and double
        printf("printf() for float goes to precision 6: %f \n", x);
        printf("printf() for float goes to precision 6: %f \n", y);
        printf("printf() for double: %g \n", z);

        // alternative variable declaration
        float w;
        w = 1.1111111;
        std::cout << w << '\n';
        printf("%g \n", w);
        printf("%f \n", w);

        double q;
        q = 9.99111119999;
        std::cout << q << '\n';
        printf("%g \n", q);
        printf("%f \n", q);

        // specify precision in printf - this is best! note the use of .14f syntax
        printf("%.9f \n", q);
        printf("%.14f \n", q);

    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}