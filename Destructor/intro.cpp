#include <iostream>
using namespace std;

// Destructor is used when need to destroy the object of a class when the scope of object ends i.e. object is no longer need

// It has same name as class and starts with tilde (~)

// Created in static memory thus compiler deletes it automatically whereas linked lists were created in heap memory thus needs to be deleted manually by the programers
class Person
{
public:
    Person()
    { // automatically
        cout << "Contructor called" << endl;
    }

    ~Person()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Person p1, p2; // this shows that destructors are called at end, automatically when scope of object ends
    return 0;
}
// We can have only one destructor in one class(multiple destructors in same class not possible)
// A destructor cannot have :
// 1. access specifiers,
// 2. parameters or
// 3. return type
// We cannot define destructors in structures(struct)
// We cannot overload or inherit destructors