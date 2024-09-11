/* Object oriented programming : data members and methods(functions).
structure vs class : structure can be easily accessible, it can not be private. Functions can not be used in structures. So object
oriented programming used. Class is basically extension of structures
A class is a template for objects, and an object is an instance of a class.*/

// classes, public and private access modifiers

// private variables access by its class functions or within the class.

#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int x, int y, int z); // Declaration only
    void getData()                     // Decalration and implementation(defination) inside the class
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData(int x, int y, int z) // Implementation(defination) outside the class
{
    a = x;
    b = y;
    c = z;
}

int main()
{
    Employee varinder;
    varinder.d = 4;
    varinder.e = 5;            // public accessed easily.
    varinder.setData(1, 2, 3); // private access can be through functions.
    varinder.getData();

    return 0;
}