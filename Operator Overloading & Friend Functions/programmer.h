//
// Created by Harrison on 2019-09-09.
//

#ifndef HW04_PROGRAMMER_H
#define HW04_PROGRAMMER_H

#include "employeeType.h"

class programmer : public employeeType
{

private:
    string deptNumber;
    string supervisor;
    double percentIncrease;
    bool knowsCPP;
    bool knowsJAVA;

public:
    // CONSTUCTOR
    programmer ();
    programmer (string, string, string, string, double, bool, bool);
    // PRE-CONDITION:
    // POST-CONDITION: new instantiated object
    programmer (string, string, string, string, int, string, double, month, int, int);
    // PRE-CONDITION:
    // POST-CONDITION: new instantiated object

    void setDeptNumber (string);
    // PRE-CONDITION: instantiated object
    // POST-CONDITION: programmer department number set
    void setSupervisor (string);
    // PRE-CONDITION: instantiated object
    // POST-CONDITION: programmer supervisor set
    void setRaise (double);
    // PRE-CONDITION: instantiated object
    // POST-CONDITION: programmer percentage increase from previous year set
    void setKnowsCPP (bool);
    // PRE-CONDITION: instantiated object
    // POST-CONDITION: programmer knowledge of C++ boolean set
    void setKnowsJava (bool);
    // PRE-CONDITION: instantiated object
    // POST-CONDITION: programmer knjowledge of Java boolean set
    void printEmployee () const;
    // PRE-CONDITION: instantiated object with valid data
    // POST-CONDITION: prints all member data in formatted form to console


};



#endif //HW04_PROGRAMMER_H
