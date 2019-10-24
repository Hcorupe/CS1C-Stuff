#include "employeeType.h"
#include "programmer.h"
#include "architect.h"

using namespace std;

void IsEqual (const employeeType&, const employeeType&);


int main ()
{

    cout << " Programmer: Harrison Corupe" << endl;
    cout << " Date: 9/5/19" << endl;
    cout << " CS1C - HW03\n\n" << endl;

    programmer *obj1 = new programmer ("Harrison", "Corupe", "123456", "602-348-4418",
                                       29, "Programmer", 100000, MAY, 21, 1990);

    architect *obj2 = new architect ("Alex", "Arch", "88888", "819-123-4444",
                                     31, "Architect", 323000, DECEMBER, 24, 2009);

   // compareNum(obj1,obj2);


    cout << *obj1 << *obj2 << endl;
    IsEqual(*obj1,*obj2);

    obj2->setPNumber("602-348-4418");
    cout << *obj1 << *obj2 << endl;
    IsEqual(*obj1,*obj2);


    cout << *obj1 << *obj2 << endl;
    if (*obj1 == *obj2)
        cout << "**Phone numbers are the same** OverLoaded" << endl << endl;
    else
        cout << "**Phone numbers are different** Overloaded" << endl << endl;


    cout << "**Adding integer value to employee object using 'addToAge ()'." << endl;
    obj1 -> addToAge (3);
    cout << *obj1 << endl;

    cout << "**Adding integer value to employee object directly using overloaded '+' operator." << endl;
    *obj1 + 2;
    cout << *obj1 << endl;

    cout << "**Incrementing age of employee using overloaded '++X' pre-increment operator." << endl;
    ++*obj1;
    cout << *obj1 << endl << endl;

    cout << "**Incrementing age of employee using overloaded 'X++' post-increment operator." << endl;
    employeeType obj3 = employeeType (*obj1);
    obj3++;
    cout << obj3 << endl << endl;

    cout << "**Instantiating new object of employee type overloaded '>>' operator." << endl;
    employeeType *obj4 = new employeeType ();

    cin >> *obj4;

    cout << endl << *obj4;

    delete obj1;
    delete obj2;
    delete obj4;

    return 0;
}

void IsEqual (const employeeType& firstEmployee, const employeeType& secondEmployee)
{
    if (isEqual (firstEmployee, secondEmployee))
        cout << "The 2 object Phone numbers are the same" << endl;
    else
        cout << "The 2 object Phone numbers are different" << endl;
}