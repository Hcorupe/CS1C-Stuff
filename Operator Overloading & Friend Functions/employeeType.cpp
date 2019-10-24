//
// Created by Harrison on 2019-09-09.
//
#include "employeeType.h"


// *** CONSTRUCTORS *** //
dateType::dateType ()
{
    monthVAR = JANUARY;
    day = 1;
    year = 1900;
}

dateType::dateType (month pMonth, int pDay, int pYear)
{
    // VALIDITY CHECK ON MONTH //
    monthVAR = pMonth;
    if (pMonth < JANUARY || pMonth > DECEMBER)
    {
        cout << "INVALID MONTH! DEFAULT MONTH SELECTED." << endl;
        monthVAR = JANUARY;
    }

    // VALIDITY CHECK ON DAY //
    day = pDay;
    if (pMonth == FEBRUARY && pDay > 28)
    {
        cout << "INVALID DAY! DEFAULT DAY SELECTED." << endl;
        day = 1;
    }
    else if (pDay < 0 || pDay > 31)
    {
        cout << "INVALID DAY! DEFAULT DAY SELECTED." << endl;
        day = 1;
    }


    year = pYear;
    if (pYear < 1900 || pYear > 9999)
    {
        cout << "INVALID YEAR! DEFAULT YEAR SELECTED." << endl;
        year = 1990;
    }
}

string dateType::getDateString () const
{
    string temp;
    string dateString;

    switch (monthVAR)
    {
        case JANUARY:
            temp = "JANUARY";
            break;
        case FEBRUARY:
            temp = "FEBRUARY";
            break;
        case MARCH:
            temp = "MARCH";
            break;
        case APRIL:
            temp = "APRIL";
            break;
        case MAY:
            temp = "MAY";
            break;
        case JUNE:
            temp = "JUNE";
            break;
        case JULY:
            temp = "JULY";
            break;
        case AUGUST:
            temp = "AUGUST";
            break;
        case SEPTEMBER:
            temp = "SEPTEMBER";
            break;
        case OCTOBER:
            temp = "OCTOBER";
            break;
        case NOVEMBER:
            temp = "NOVEMBER";
            break;
        case DECEMBER:
            temp = "DECEMBER";
            break;
    }

    dateString = temp + " " + to_string (day) + ", " + to_string (year);
    return dateString;
}

ostream& operator << (ostream& ccout, const dateType& dateIN)
{
ccout << dateIN.monthVAR << "/" << dateIN.day << "/" << dateIN.year;

return ccout;
}





int employeeType::employeeCount = 0;

// *** CONSTRUCTORS *** //
employeeType::employeeType ()
{
    nameFirst = "UNK";
    nameLast = "UNK";
    eID = "xxx-XXXX";
    phoneNumber = "(###) ###-####";
    age = 0;
    jobTitle = "UNK";
    salary = 0.0;
    hireDate = dateType ();
}

employeeType::employeeType (string pFName, string pLName, string pID, string pNumber, int pAge,
                            string pTitle, double pSalary, month pMonth, int pDay, int pYear)
{
    setNameFirst (pFName);
    setNameLast (pLName);
    setEID (pID);
    setPNumber (pNumber);
    setAge (pAge);
    setTitle (pTitle);
    setSalary (pSalary);
    hireDate = dateType (pMonth, pDay, pYear);
}


void employeeType::setNameFirst (string pName)
{
    nameFirst = pName;
}

void employeeType::setNameLast (string pName)
{
    nameLast = pName;
}

void employeeType::setEID (string pID)
{
    eID = pID;
}

void employeeType::setPNumber (string pNumber)
{
    phoneNumber = pNumber;
}

void employeeType::setAge (int pAge)
{
    age = pAge;
    if (pAge < 0 || pAge > 150)
    {
        cout << "***ERROR*** DEFAULT AGE SET***" << endl;
        age = 0;
    }
}

void employeeType::setTitle (string pTitle)
{
    jobTitle = pTitle;
}

void employeeType::setSalary (double pSalary)
{
    salary = pSalary;
    if (pSalary < 0 || pSalary > 9999999.99)
    {
        cout << "***ERROR*** DEFAULT SALARY SET." << endl;
        salary = 0.0;
    }
}

void employeeType::setHireDate (month pMonth, int pDay, int pYear)
{
    hireDate = dateType (pMonth, pDay, pYear);
}

// *** MISC *** //
void employeeType::addToAge (int numYears)
{
    setAge (age + numYears);

    cout << numYears << " years added to age of employee" << endl;
}

void employeeType::printEmployee () const
{
    string fullName = nameFirst + " " + nameLast;

    cout << endl
         << "NAME          : " << fullName << endl
         << "EMPLOYEE ID # : " << eID << endl
         << "PHONE #       : " << phoneNumber << endl
         << "AGE           : " << age << endl
         << "JOB TITLE     : " << jobTitle << endl
         << "SALARY        : " << salary << endl
         << "HIRE DATE     : " << hireDate.monthVAR << "/" << hireDate.day << "/" << hireDate.year << endl;
}

bool employeeType::operator == (const employeeType& secondEmployee)
{
    bool check = false;

    if (phoneNumber.substr (0,3) == secondEmployee.phoneNumber.substr (0,3))
        check = true;
    else
        return false;
    if (phoneNumber.substr (4,3) == secondEmployee.phoneNumber.substr (4,3))
        check = true;
    else
        return false;
    if (phoneNumber.substr (8,4) == secondEmployee.phoneNumber.substr (8,4))
        check = true;
    else
        return false;

    return check;
}

void employeeType::operator + (int variable)
{
    setAge (age + variable);

    cout << variable << " years added to age of employee" << endl;
}

bool isEqual (const employeeType& firstEmployee, const employeeType& secondEmployee)
{

    bool checker = false;

    if (firstEmployee.phoneNumber.substr (0,3) == secondEmployee.phoneNumber.substr (0,3))
        checker = true;
    else
        return false;
    if (firstEmployee.phoneNumber.substr (4,3) == secondEmployee.phoneNumber.substr (4,3))
        checker = true;
    else
        return false;
    if (firstEmployee.phoneNumber.substr (8,4) == secondEmployee.phoneNumber.substr (8,4))
        checker = true;
    else
        return false;

    return checker;
}

employeeType employeeType::operator ++ (int u)
{
    employeeType temp = *this;

    age++;

    return temp;
}

employeeType employeeType::operator ++ ()
{
    age++;

    return *this;
}

ostream& operator << (ostream& ccout, const employeeType& employeeIN)
{
string fullName = employeeIN.nameFirst + " " + employeeIN.nameLast;

ccout << "| " << setw (15) << left << fullName << " | " << setw (14) << employeeIN.eID << " | "
        << setw (15) << employeeIN.phoneNumber << " | "
        << setw (4) << employeeIN.age << " | " << setw (11) << employeeIN.jobTitle << " | "
        << setw (11) << employeeIN.salary << " | "
        << setw (18) << employeeIN.hireDate.getDateString () << " |" << endl;

return ccout;
}

istream& operator >> (istream& ccin, employeeType& employeeOUT)
{
    int tempMONTHvar;
    int tempDayVar;
    int tempYearVar;

    cout << "Enter employee first name : ";
    ccin >> employeeOUT.nameFirst;
    cout << "Enter employee last name  : ";
    ccin >> employeeOUT.nameLast;
    cout << "Enter employee ID #       : ";
    ccin >> employeeOUT.eID;
    cout << "Enter employee phone #    : ";
    ccin.ignore ();
    getline (ccin, employeeOUT.phoneNumber);
    cout << "Enter employee age        : ";
    ccin >> employeeOUT.age;
    cout << "Enter employee job title  : ";
    ccin.ignore ();
    getline (ccin, employeeOUT.jobTitle);
    cout << "Enter employee salary     : ";
    ccin >> employeeOUT.salary;
    cout << "Enter MONTH of hire       : ";
    ccin >> tempMONTHvar;
    cout << "Enter DATE of hire        : ";
    ccin >> tempDayVar;
    cout << "Enter YEAR of hire        : ";
    ccin >> tempYearVar;

    employeeOUT.hireDate = dateType (month (tempMONTHvar), tempDayVar, tempYearVar);

    return ccin;
}

