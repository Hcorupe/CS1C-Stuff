//
// Created by Harrison on 2019-09-23.
//

#include "manageInventory.h"
#include "database.h"

void nSfunction::currentStock(){

    database *stock = new database;

    cout << endl
         << "Current Stock" << endl
         << "===============================================" << endl
         << left << "| " << setw (25) << "Name of Equipment" << " | " << setw (4) << "QTY" << " | " << setw (8) << "Cost" << " |" << endl
         << "===============================================" << endl;


    cout << left;
    for (int i = 0; i < stock -> store -> size (); ++i)
        cout <<"| " << setw(26)<< stock -> store -> at (i) -> name <<"| "
             << setw(4) << stock -> store -> at (i) -> quantity <<"| "
             << setw(10)<< stock->store -> at(i) ->cost <<"|"<<endl;
    cout << "===============================================" << endl << endl;


}


// *** CONSTRUCTORS *** //
manageInventory::manageInventory () : size {MAX_SIZE}, count {0}

{
    p_pInventoryItems = new item *[size];

    for (int i = 0; i < size; ++i)
    {
        item *obj = new item ();
        p_pInventoryItems [i] = obj;
    }
}

manageInventory::manageInventory (int x) : size {x}, count {0}

{
    p_pInventoryItems = new item *[size];

    for (int i = 0; i < size; ++i)
    {
        item *obj = new item ();
        p_pInventoryItems [i] = obj;
    }
}



manageInventory::~manageInventory ()
{
    for (int i = 0; i < size; ++i)
        delete p_pInventoryItems [i];

    delete [] p_pInventoryItems;
}

// *** MISC *** //
void manageInventory::addItem (item& sumObj, int qtyPurchased)
{
    sumObj.quantity -= qtyPurchased;

    item *tempOBJ = new item (sumObj.name, qtyPurchased, sumObj.cost);

    p_pInventoryItems [count] = tempOBJ;

    count++;
}

void manageInventory::addItem (string pName, int pQTY, double pCost)
{
    item *obj = new item (pName, pQTY, pCost);

    p_pInventoryItems [count] = obj;

    count++;
}

double manageInventory::subtotalInventory ()
{
    double temp = 0;

    for (int i = 0; i < count; ++i)
    {
        temp += (p_pInventoryItems [i] -> quantity * p_pInventoryItems [i] -> cost);
    }

    return temp;
}


void manageInventory::printInventory ()
{
    for (int i = 0; i < count; ++i)
    {
        cout << "| " << setw (25) << p_pInventoryItems [i] -> name
             << " | " << setw (4) << p_pInventoryItems [i] -> quantity
             << " | " << setw (8) << p_pInventoryItems [i] -> cost << " |" << endl;
    }
    cout << "===============================================" << endl
         << "| " << right << setw (25) << "SUBTOTAL:" << setw (10) << " " << left << setw (8) << subtotalInventory () << " |" << endl
         << "| " << right << setw (25) << "   TOTAL:" << setw (10) << " " << left << setw (8) << subtotalInventory () * TAX_RATE << " |" << endl;
}
