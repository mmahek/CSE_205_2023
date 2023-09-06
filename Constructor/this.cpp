#include <iostream>
using namespace std;

class A{
    int a, b;
    public:

    A( int a, int b){
            this->a = a;
            this->b = b;
    }

    void display(){
        cout << a << " " << b << endl;
    }
};
int main(){
    A obj1(24, 23);
    obj1.display(); //prints garbage values without this
    return 0;
}
// In your code, you're facing an issue due to the ambiguity between the class member variables and the function parameters with the same names. When you use a and b within the constructor, it refers to the constructor's parameters, not the class's member variables. This results in the member variables a and b not being initialized, leading to garbage values being displayed.
// use this keyword 