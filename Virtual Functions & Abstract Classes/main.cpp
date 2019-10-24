#include "shape.h"
#include "rectangle.h"
#include "triangle.h"

using namespace std;
#include <iostream>

int main() {

    shape *shapeR = new rectangle(10, 14);
    shape *shapeT = new triangle(5, 7, 9);


    //shapeR obj Area
    cout << "Rectangle "; // area = 140
    printArea(*shapeR);
    //PshapeR obj erimeter
    cout <<"Rectangle "; // P = 48
    printPerimeter(*shapeR); cout <<"\n";

    //shapeT obj Area
    cout << "Triangle ";  // A = 17.5
    printArea(*shapeT);
    //shapeT obj Perimeter
    cout << "Triangle "; //P = 21
    printPerimeter(*shapeT); cout <<"\n";

    delete shapeR;
    delete shapeT;


    return 0;
}