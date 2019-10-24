//
// Created by Harrison on 2019-09-09.
//

#ifndef ARCHITECT_H
#define ARCHITECT_H

#include "employeeType.h"

class architect : public employeeType
{
private:
    string deptNumber;
    string supervisor;
    double percentIncrease;
    int yearsEXP;

public:
    // *** CONSTRUCTORS *** //
    architect ();
    architect (string, string, double, int);
    // PRE-CONDITION: //
    // POST-CONDITION: new instantiated object with DERIVED CLASS specific data members initialized //
    architect (string, string, string, string, int, string, double, month, int, int);
    // PRE-CONDITION: //
    // POST-CONDITION: new instantiated object with BASE CLASS specific data initialized //

    // *** MUTATORS *** //
    void setDeptNumber (string);
    // PRE-CONDITION: instantiated object //
    // POST-CONDITION: architect department number set //
    void setSupervisor (string);
    // PRE-CONDITION: instantiated object //
    // POST-CONDITION: architect supervisor set //
    void setRaise (double);
    // PRE-CONDITION: instantiated object //
    // POST-CONDITION: architect percentage increase from previous year set //
    void setExperience (int);
    // PRE-CONDITION: instantiated object //
    // POST-CONDITION: architect years experience set //


    void printEmployee () const;

};

#endif //ARCHITECT_H