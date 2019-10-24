

#include "triangle.h"

triangle::triangle (int pbase, int pheight, int phypotenuse) :
        base {pbase}, height {pheight}, hypotenuse {phypotenuse} {}

void triangle::print ()
{
    shape::print ();

    cout << "HEIGHT  : " << height << ", BASE   : " << base << ", HYPOTENUSE: "
         << hypotenuse << endl
         << endl;
}

void triangle::updateDimensions (int pbase, int pheight, int phypotenuse)
{
    base = pbase;
    height = pheight;
    hypotenuse = phypotenuse;
}

int triangle::calcPerimeter () const
{
    return base + height + hypotenuse;
}

double triangle::calcArea () const
{
    return 0.5 * base * height;
}