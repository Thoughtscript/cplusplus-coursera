//
// Created by Adam Gerard on 5/13/20.
//

#include "Cube.h"

using namespace std;

Cube::Cube() {
    num = 0;
}

Cube::Cube(int a) {
    num = a;
}

Cube::Cube(const Cube &obj) {
    num = obj.num;
    std::cout << "Copy constructor: " << num << " at: " << num << std::endl;

}