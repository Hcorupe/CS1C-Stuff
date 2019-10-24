

#ifndef HW09_SHAPE_H
#define HW09_SHAPE_H


#include <iostream>
#include <string>

using namespace std;

/*struct dimensions
//PURPOSE: DATA TYPE FOR STORING DIMENSIONS AND COORDINATES //
{
    int x;
    int y;

    int radius;
    int length;
    int width;

    dimensions (int, int, int, int, int);
}; */




class shape
{
private:
    int x;
    int y;

public:
    shape (int = 0, int = 0);
    // PRE-CONDITION: //
    // POST-CONDITION: //
    virtual  ~shape();
    virtual void print ();
    // PRE-CONDITION: instantiated object with valid coordinates/dimensions //
    // POST-CONDITION: prints data //
    void move (int, int);
    // PRE-CONDITION: instantiated object with valid coordinates //
    // POST-CONDITION: updates coordinates of object to parameters //
    virtual void updateDimensions (int, int, int) = 0;
    // PRE-CONDITION: instantiated object with valid dimensional data //
    // POST-CONDITION: updates dimensions of shape //
    virtual int calcPerimeter () const = 0;
    // PRE-CONDITION: instantiated object with valid dimensional data //
    // POST-CONDITION: returns perimeter measurement of shape //
    virtual double calcArea () const = 0;
    // PRE-CONDITION: instantiated object with valid dimensional data //
    // POST-CONDITION: returns area of shape //
};

//void drawShape (shape&, dimensions&);
// PRE-CONDITION: instantiated 'shapeType' object and valid 'dimension' object with data //
// POST-CONDITION: calls 'move' and 'updateDimensions' functions and passes data to update//
void printPerimeter (const shape&);
// PRE-CONDITION: instantiated object with valid dimensional data //
// POST-CONDITION: calls 'calcPerimeter' and prints out perimeter to console //
void printArea (const shape&);
// PRE-CONDITION: instantiated object with valid dimensional data //
// POST-CONDITION: calls 'calcArea' and prints out area to console //


#endif //HW09_SHAPE_H
