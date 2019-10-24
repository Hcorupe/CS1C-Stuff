//
// Created by Harrison on 2019-09-09.
//
#include "programmer.h"


programmer::programmer ()
{
    deptNumber = "SMITH";
    supervisor = "DEFAULT";
    percentIncrease = 0.0;
    knowsCPP = false;
    knowsJAVA = false;
    setTitle ("Programmer");
}

programmer::programmer (string pFName, string pLName, string pNumber, string pSuper,
                        double pRaise, bool pCPP, bool pJava)
{
    setDeptNumber (pNumber);
    setSupervisor (pSuper);
    setRaise (pRaise);
    setKnowsCPP (pCPP);
    setKnowsJava (pJava);
    setTitle ("Programmer");
}

programmer::programmer (string pFName, string pLName, string pID, string pNumber, int pAge,
                        string pTitle, double pSalary, month pMonth, int pDay, int pYear):

        employeeType (pFName, pLName, pID, pNumber, pAge, pTitle, pSalary, pMonth, pDay, pYear)
{
    deptNumber = "SMITH";
    supervisor = "DESIGNER";
    percentIncrease = 0.8;
    knowsCPP = true;
    knowsJAVA = true;
}

void programmer::setDeptNumber (string pNumber)
{
    deptNumber = pNumber;
}

void programmer::setSupervisor (string pSuper)
{
    supervisor = pSuper;
}

void programmer::setRaise (double pRaise)
{
    percentIncrease = pRaise;
    if (pRaise < 0 || pRaise > 100.0)
        percentIncrease = 0.0;
}

void programmer::setKnowsCPP (bool pCPP)
{
    knowsCPP = pCPP;
}

void programmer::setKnowsJava (bool pJava)
{
    knowsJAVA = pJava;
}

void programmer::printEmployee () const
{
    employeeType::printEmployee ();
    cout << "DETAIL LISTING" << endl
         << "\n" << endl
         << "DEPARTMENT #  : " << deptNumber << endl
         << "SUPERVISOR    : " << supervisor << endl
         << "% SALARY INC. : " << percentIncrease << endl
         << "KNOWS C++     : " << knowsCPP << endl
         << "KNOWS JAVA    : " << knowsJAVA << endl;
}


bool compareNum(const employeeType& eNumber , const programmer& ppNumber){




return eNumber.phoneNumber == ppNumber.phoneNumber;

}
