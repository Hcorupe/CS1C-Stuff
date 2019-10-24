
#include "rectangle.h"

rectangle::rectangle (int pL, int pW) : l {pL}, w {pW} {}

void rectangle::print ()
{
    shape::print ();

    cout << "LENGTH  : " << l << ", WIDTH   : " << w << endl
         << endl;
}

void rectangle::updateDimensions (int pR, int pL, int pW)
{
    l = pL;
    w = pW;
}

int rectangle::calcPerimeter () const
{
    return (2 * l) + (2 * w);
}

double rectangle::calcArea () const
{
    return l * w;
}

rectangle::~rectangle() {

}
