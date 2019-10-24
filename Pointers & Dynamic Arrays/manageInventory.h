//
// Created by Harrison on 2019-09-23.
//

#ifndef HW07_MANAGEINVENTORY_H
#define HW07_MANAGEINVENTORY_H
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

const int MAX_SIZE = 50;
const double TAX_RATE = 1.0825;


namespace nSfunction
{
    void currentStock();
}

struct item
{
    string name;
    int quantity;
    double cost;

    item () : name {" "}, quantity {0}, cost {0.0} {}
    // PRE-CONDITION:
    // POST-CONDITION: instantiates object with default parameters
    item (string x, int y, double z) : name {x}, quantity {y}, cost {z} {}
    // PRE-CONDITION: //
    // POST-CONDITION: instantiates object with parameters passed by client
};

class manageInventory
{
private:
    int size;
    int count;
    item **p_pInventoryItems;

public:

    manageInventory ();
    // PRE-CONDITION: //
    // POST-CONDITION: instantiates object with default parameters and iteratively initializes array//
    manageInventory (int);
    // PRE-CONDITION: //
    // POST-CONDITION: instantiates object and iteratively initializes array to given size //
    ~manageInventory ();
    // PRE-CONDITION: instantiated object//
    // POST-CONDITION: deallocates all pointers in array and array itself //


    void addItem (item&, int);
    // PRE-CONDITION: instantiated 'item' objects and 'manageInventory' object //
    // POST-CONDITION: creates copy of 'item' object to insert into array and decrements qty as necessary //
    void addItem (string, int, double);
    // PRE-CONDITION: instantiated manageInventory object //
    // POST-CONDITION: declares new dynamic 'item' object to be inserted into array of manageInventory //
    double subtotalInventory ();
    // PRE-CONDITION: full array within 'manageInventory' object //
    // POST-CONDITION: gives subtotal of array objects and their cost (pre-tax) //
    void printInventory ();
    // PRE-CONDITION: instantiated manageInventory object //
    // POST-CONDITION: iteratively prints out table-formatted data of 'item' objects//
};


#endif //HW07_MANAGEINVENTORY_H
