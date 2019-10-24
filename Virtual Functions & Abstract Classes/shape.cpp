
#include "shape.h"

/*dimensions::dimensions (int ax = 0, int by = 0, int crad = 0, int dlen = 0, int ewid = 0)
{
         x = ax;
         y = by;
    radius = crad;
    length = dlen;
    width  = ewid;


}*/

shape::shape (int pX, int pY) {

    x = pX;
    y = pY;

}

shape::~shape() {

}

void shape::print ()
{
    cout << endl
         << "POSITION: (" << x << ", " << y << ")" << endl
         << endl;
}

void shape::move (int update_x, int update_y)
{
    x = update_x;
    y = update_y;
}

////////////////////////////////////////////////////////////////////////////////
// NON-MEMBER FUNCTIONS                                                       //
////////////////////////////////////////////////////////////////////////////////
/*void drawShape (shape& object, dimensions& data)
{
    if (data.x != 0 && data.y != 0)
        object.move (data.x, data.y);
    if (data.radius > 0 || (data.length > 0 && data.width > 0))
        object.updateDimensions (data.radius, data.length, data.width);
}  */

void printPerimeter (const shape& object)
{
    cout << "Perimeter = " << object.calcPerimeter() << endl;
}

void printArea (const shape& object)
{
    cout << "Area = " << object.calcArea() << endl;
}
