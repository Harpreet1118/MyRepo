/* Visibility mode :- How to inherit (privately or publicly) the public members of the base class is visibility mode.
1.) Default visibility mode is private.
2.) Public Visibility Mode : Public members of the base class becomes Public members of the derived class.
3.) Private Visibility Mode : Public members of the base class becomes Private members of the derives class.
4.) Private members are never inherited. */

#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;

    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }

    Employee() {}
};

// Derived class
class Programmer : public Employee // By default visibility mode is private.
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId; // Here, this id from the base class so no need to declare.
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee varinder(1), muskan(2);
    cout << varinder.salary << endl;
    cout << muskan.salary << endl;

    Programmer skillf(1);
    cout << skillf.languageCode << endl;
    cout << skillf.id << endl;
    skillf.getData();

    return 0;
}