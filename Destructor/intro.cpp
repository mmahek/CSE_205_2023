#include <iostream>
using namespace std;

// Destructor is used when need to destroy the object of a class when the scope of object ends

//it has same name as class and starts with tilde (~)
class Person{
    public:
    Person(){//automatically
        cout << "Contructor called" << endl;
    }

    ~Person(){
        cout << "Destructor called" << endl;
    }
};

int main(){
    Person p1, p2;//this shows that destructors are called at end, automatically when scope of object ends
    return 0;
}