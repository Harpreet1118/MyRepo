#include <iostream>
using namespace std;

class baseClass
{

public:
    int var_base = 14;
    virtual void display() = 0; // 0 means do nothing function. This is a Pure virtual function inside Abstract base class.
};

class derivedClass : public baseClass
{

public:
    int var_derived = 52;
    void display()
    {
        cout << "Derived class is executing" << endl;
        cout << "Displaying Base class variables var_base " << var_base << endl;
        cout << "Displaying Derived class variables var_derived " << var_derived << endl;
    }
};

class derivedClass1 : public baseClass
{

public:
    int var_derived1 = 82;
    void display()
    {
        cout << "Derived class 1 is executing" << endl;
        cout << "Displaying Base class variables var_base " << var_base << endl;
        cout << "Displaying Derived class variables var_derived1 " << var_derived1 << endl;
    }
};

int main()
{
    derivedClass obj_derived;
    derivedClass1 obj_derived1;

    baseClass *base_class_pointer;

    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class object.
    base_class_pointer->display();     // Execute the display() function of derived class.

    base_class_pointer = &obj_derived1;
    base_class_pointer->display(); /* Execute the display() function of derived class 1. If no display function of derived1 then display function
    of base class will execute. */

    return 0;
}