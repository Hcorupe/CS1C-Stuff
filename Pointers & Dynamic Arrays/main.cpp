#include "manageInventory.h"
#include "database.h"


/*
 * Programmer :  Harrison Corupe
 * Date       :  9/24/19
 * HW07          CS1C
 *
 */

int main()
{


    cout << fixed << showpoint << setprecision (2);

    //INSTANTIATING
    database *stock = new database;
    manageInventory *invoice1 = new manageInventory (4);
    manageInventory **receiptsLog = new manageInventory *[5];


     nSfunction::currentStock();

    /* ADDING PURCHASES OF ITEMS AND QUANTITY TO RECEIPTS. ALSO DELETES QUANTITY FROM
       REMAINING STOCK IN DATABASE */
    invoice1 -> addItem (*(stock -> store -> at (0)), 2);
    invoice1 -> addItem (*(stock -> store -> at (1)), 3);
    invoice1 -> addItem (*(stock -> store -> at (2)), 1);
    invoice1 -> addItem (*(stock -> store -> at (4)), 4);


    /* PRINTING RECEIPT  */
    cout << endl
         << "Transaction " << endl
         << "===============================================" << endl
         << left << "| " << setw (25) << "Name of Equipment" << " | " << setw (4)
         << "QTY" << " | " << setw (8) << "Cost" << " |" << endl
         << "===============================================" << endl;
    invoice1 -> printInventory ();
    cout << "===============================================" << endl << endl;


    cout << endl << endl;
    receiptsLog [0] = new manageInventory (*invoice1);



    cout << endl
         << "Remaining Stock" << endl
         << "===============================================" << endl
         << left << "| " << setw (25) << "Name of Equipment" << " | " << setw (4)
         << "QTY" << " | " << setw (8) << "Cost" << " |" << endl
         << "===============================================" << endl;


    cout << left;
    for (int i = 0; i < stock -> store -> size (); ++i)
        cout <<"| " << setw(26)<< stock -> store -> at (i) -> name <<"| "
             << setw(4) << stock -> store -> at (i) -> quantity <<"| "
             << setw(10)<< stock->store -> at(i) ->cost <<"|"<<endl;
    cout << "===============================================" << endl << endl;



    cout << "Audit Log " << endl;
    for (int i = 0; i < 3; ++i)
        cout << i + 1 << ") " << receiptsLog[i]->subtotalInventory() * TAX_RATE << endl;




    /* DEALLOCATING  */
    delete stock;
    delete invoice1;
    delete [] receiptsLog;

    return 0;
}