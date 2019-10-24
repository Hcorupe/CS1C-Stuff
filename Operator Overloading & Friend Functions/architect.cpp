//
// Created by Harrison on 2019-09-09.
//
#ifndef HW04_ARCHITECT_H
#define HW04_ARCHITECT_H

#include "architect.h"

// *** CONSTRUCTORS *** //
architect::architect ()
{
    deptNumber = "XXXXXXX";
    supervisor = "DEFAULT";
    percentIncrease = 0.0;
    yearsEXP = 0;
    setTitle ("Architect");
}

architect::architect (string pNumber, string pSuper, double pRaise, int pExp)
{
    setDeptNumber (pNumber);
    setSupervisor (pSuper);
    setRaise (pRaise);
    setExperience (pExp);
    setTitle ("Architect");
}

architect::architect (string pFName, string pLName, string pID, string pNumber, int pAge,
                      string pTitle, double pSalary, month pMonth, int pDay, int pYear):
        employeeType (pFName, pLName, pID, pNumber, pAge, pTitle, pSalary, pMonth, pDay, pYear)
{
    deptNumber = "XXXXXX";
    supervisor = "DEFAULT";
    percentIncrease = 0.0;
    yearsEXP = 0;
}


void architect::setDeptNumber (string pNumber)
{
    deptNumber = pNumber;
}

void architect::setSupervisor (string pSuper)
{
    supervisor = pSuper;
}

void architect::setRaise (double pRaise)
{
    percentIncrease = pRaise;
    if (pRaise < 0 || pRaise > 100.0)
        percentIncrease = 0.0;
}

void architect::setExperience (int pExp)
{
    yearsEXP = pExp;
    if (pExp < 0 || pExp > 100)
        yearsEXP = 0;
}

// *** MISC *** //
void architect::printEmployee () const
{
    employeeType::printEmployee ();
    cout << "\tDETAIL LISTING" << endl
         << "\t==============" << endl
         << "\tDEPARTMENT #  : " << deptNumber << endl
         << "\tSUPERVISOR    : " << supervisor << endl
         << "\t% SALARY INC. : " << percentIncrease << endl
         << "\tYEARS EXP     : " << yearsEXP << endl;
}

#endif //HW04_ARCHITECT_H
