
#ifndef HW09_TRIANGLE_H
#define HW09_TRIANGLE_H
#include "shape.h"

class triangle : public shape
{
    // base = width, length = height, hypotenuse //
private:
    int base;
    int height;
    int hypotenuse;

public:
    triangle (int, int, int);
    void print ();
    // PRE-CONDITION: instantiated object with valid coordinates/dimensions //
    // POST-CONDITION: prints data //
    void updateDimensions (int, int, int);
    // PRE-CONDITION: instantiated object with valid dimensional data //
    // POST-CONDITION: updates dimensions of shape //
    int calcPerimeter () const;
    // PRE-CONDITION: instantiated object with valid dimensional data //
    // POST-CONDITION: returns perimeter measurement of shape //
    double calcArea () const;
    // PRE-CONDITION: instantiated object with valid dimensional data //
    // POST-CONDITION: returns area of shape //
};


#endif //HW09_TRIANGLE_H
