

#ifndef HW09_RECTANGLE_H
#define HW09_RECTANGLE_H


#include "shape.h"

class rectangle : public shape
{
private:
    int l;
    int w;

public:
    rectangle (int, int);

    virtual ~rectangle();

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

#endif //HW09_RECTANGLE_H
