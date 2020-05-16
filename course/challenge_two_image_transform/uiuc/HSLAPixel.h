/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)

    class HSLAPixel {
    public:
        /**
         * Constructor.
         */
        // HSLAPixel();

        // hue in degrees between 0 and 360 using a double
        double h;

        // saturation as a decimal value between 0.0 and 1.0 using a double
        double s;

        // luminance as a decimal value between 0.0 and 1.0 using a double
        double l;

        //alpha channel as a decimal value between 0.0 and 1.0 using a double
        double a;

    };

    // may not need this - encountered a type error and didn't read the full stacktrace
    std::ostream & operator << ( std::ostream& os, HSLAPixel const& hslaPixel );
}
