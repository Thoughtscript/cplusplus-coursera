/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#include <cmath>
#include <iostream>
#include "HSLAPixel.h"

using namespace std;

namespace uiuc {

    // may not need this - encountered a type error and didn't read the full stacktrace
    std::ostream & operator << ( std::ostream& os, HSLAPixel const& hslaPixel ) {
        os << "HSLAPixel(h=" << hslaPixel.h << ", l=" << hslaPixel.l << ", s=" << hslaPixel.s << ", a=" << hslaPixel.a << std::dec << ")";
        return os;
    }

}
