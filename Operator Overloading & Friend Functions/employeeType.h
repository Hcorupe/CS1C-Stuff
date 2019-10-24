//
// Created by Harrison on 2019-09-09.
//
#ifndef EMPLOYEETYPE_H
#define EMPLOYEETYPE_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

enum month {JANUARY = 1,
            FEBRUARY = 2,
            MARCH = 3,
            APRIL = 4,
            MAY = 5,
            JUNE = 6,
            JULY = 7,
            AUGUST = 8,
            SEPTEMBER = 9,
            OCTOBER = 10,
            NOVEMBER = 11,
            DECEMBER = 12};


class dateType
{
    friend class employeeType;


private:
    month monthVAR;
    int day;
    int year;

public:
    // *** CONSTRUCTORS *** //
    dateType ();
    dateType (month, int, int);

    // *** MISC *** //
    string getDateString () const;
    // PRE-CONDITION: instantiated object with valid data //
    // POST-CONDITION: returns string translation of enum data member //
    friend ostream& operator << (ostream&, const dateType&);
    // PRE-CONDITION: instantiated object //
    // POST-CONDITION: output string literal to console //

};

class programmer;
class employeeType
{

    friend bool compareNum(const employeeType& , const programmer&);
private:
    string nameFirst;
    string nameLast;
    string eID;
    string phoneNumber;
    int age;
    string jobTitle;
    double salary;
    dateType hireDate;

public:
    static int employeeCount;

    // *** CONSTRUCTORS *** //
    employeeType ();
    employeeType (string, string, string, string, int, string, double, month, int, int);
    // ~employeeType ();

    void setNameFirst (string);
    // PRE-CONDITION: instantiated object //
    // POST-CONDITION: employee first name set //
    void setNameLast (string);
    // PRE-CONDITION: instantiated object //
    // POST-CONDITION: employee last name set //
    void setEID (string);
    // PRE-CONDITION: instantiated object //
    // POST-CONDITION: employee ID# set //
    void setPNumber (string);
    // PRE-CONDITION: instantiated object //
    // POST-CONDITION: employee phone number set //
    void setAge (int);
    // PRE-CONDITION: instantiated object //
    // POST-CONDITION: employee age set //
    void setTitle (string);
    // PRE-CONDITION: instantiated object //
    // POST-CONDITION: employee job title set //
    void setSalary (double);
    // PRE-CONDITION: instantiated object //
    // POST-CONDITION: employee salary set //
    void setHireDate (month, int, int);
    // PRE-CONDITION: instantiated object //
    // POST-CONDITION: date set by month, day, year //

    // *** MISC *** //
    void addToAge (int);
    // PRE-CONDITION: pre-existing object with age set //
    // POST-CONDITION: adds integer parameter to 'age' data member //
    virtual void printEmployee () const;
    // PRE-CONDITION: instantiated object with valid data fields //
    // POST-CONDITION: prints all object data in formatted form //
    bool operator == (const employeeType&);
    // PRE-CONDITION: two instantiated objects with valid phone number field data //
    // POST-CONDITION: returns boolean value based on comparison of phone numbers being equal //
    void operator + (int);
    // PRE-CONDITION: instantiated objects with valid age set //
    // POST-CONDITION: adds integer value on right-hand side of operator to object //
    employeeType operator ++ ();
    // PRE-CONDITION: instantiated object with valid age set //
    // POST-CONDITION: pre-increment operator. Object gets age incremented, then returned as value //
    employeeType operator ++ (int); // post-increment operator, i.e. return previous value, then increment //
    // PRE-CONDITION: instantiated object with valid age set //
    // POST-CONDITION: post-increment operator. Object gets saved into temporary local object to be returned before age incremented //
    friend bool isEqual (const employeeType&, const employeeType&);
    // PRE-CONDITION: two instantiated objects with valid phone number data //
    // POST-CONDITION: returns boolean value based on comparison of phone numbers being equal //
    friend ostream& operator << (ostream&, const employeeType&);
    // PRE-CONDITION: instantiated object and #include <iostream> //
    // POST-CONDITION: prints TABLE formatted data of objects //
    friend istream& operator >> (istream&, employeeType&);
    // PRE-CONDITION: instantiated object with/without initialized data members //
    // POST-CONDITION: all data members prompted for user input //

    friend bool compareNum(const employeeType& , const programmer&);

};

#endif //EMPLOYEETYPE_H