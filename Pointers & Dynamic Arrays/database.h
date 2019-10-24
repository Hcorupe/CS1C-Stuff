//
// Created by Harrison on 2019-09-23.
//

#include "manageInventory.h"

#ifndef HW07_DATABASE_H
#define HW07_DATABASE_H

struct database
{
    vector <item*> *store;
    int inventoryCount;

    database ()
    // PRE-CONDITION:
    // POST-CONDITION: instantiated database
    {
        store = new vector <item*>;

        store -> push_back (new item ("NIKE basketball shoes", 22, 145.99));
        store -> push_back (new item ("Under Armour T-Shirt", 33, 29.99));
        store -> push_back (new item ("Brooks running shoes", 11, 111.44));
        store -> push_back (new item ("Asics running shoes", 20, 165.88));
        store -> push_back (new item ("Nike shorts", 77, 45.77));

        inventoryCount = store -> size ();
    }

    ~database ()
    {
        for (int i = 0; i < store -> size (); ++i)
            delete store -> at (i);
    }
};



#endif //HW07_DATABASE_H
