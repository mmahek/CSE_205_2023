#include <iostream> 
using namespace std;
 // Constructor : A special type of member function that is called automatically when an object is created;
 // Constructor's name is same as the class name
class Student {
    public:
    string name;
    int age;
    string gender;

    // Default Constructor

    //these don't  have parameters however input arguments are availaible for parameterized contructor nd copy constructors.

    Student(){ // method named same as class
    // method inside class which is same named as clas  and has no return type, special method called automatically when an object is created of the class
    //cout <<"Default constructor invoked" << endl;//this statement is automatically printed without the method being called anywhere, this will be called in background
    // if a return type is defined for th constructor method, it throws error :: > "return type specification for constructor invalid"
    }

    // Student(string myGender){

    // }
    Student(string myName, int myAge, string myGender){ //whenever this method is called, we will pass these parameter in object 
    cout << "Parameterized constructor invoked" << endl;
        name = myName;
        age = myAge;
        gender = myGender;

    }
    void display(){
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Gender: " << endl;
    }
};
int main(){
    // Student s1("Mahek", 20, "F") ;
    // Student s2;
    // // whenever object is called, all constructors will be called, i.e.  cout's and then the parameters will be called first
    // cout << s1.name << endl;
    // cout << s1.age;
    diplay()
    return 0;
}
/*
Constructors are special member functions in object-oriented programming languages like C++ and Java. They have a specific purpose: to initialize the state of an object when it is created. Constructors are automatically invoked when an object is instantiated from a class, and they help ensure that the object starts with a valid and consistent state. Here are some key points to understand about constructors:

1. **Initialization**: The primary role of constructors is to initialize the member variables or attributes of an object. It ensures that the object is set up correctly as soon as it's created.

2. **Same Name as Class**: Constructors have the same name as the class they belong to. This helps the compiler identify them as constructors.

3. **No Return Type**: Constructors do not have a return type, not even `void`. This is because they are automatically called when an object is created, and their purpose is to initialize, not to return values.

4. **Multiple Constructors**: A class can have multiple constructors with different parameter lists. This is known as constructor overloading. Depending on the arguments you provide when creating an object, a specific constructor is called.

5. **Default Constructor**: If you don't define any constructors in your class, the compiler provides a default constructor with no parameters. This default constructor initializes the member variables to their default values.

6. **Parameterized Constructors**: Constructors can take parameters, allowing you to provide values to initialize the object's state. These parameters can vary in number and data type.

7. **Initialization Lists**: In languages like C++, you can use an initialization list in the constructor to initialize member variables directly, which can be more efficient than assignment within the constructor body.

8. **Order of Execution**: When an object is created, the constructors are executed in a specific order. The base class constructor is called before the derived class constructor. Within a class, constructors are called in the order they appear in the class definition.

9. **Destructor**: While constructors initialize objects, destructors (if defined) clean up resources and perform necessary cleanup when an object goes out of scope or is explicitly deleted. Destructors have the same name as the class but preceded by a tilde (~).

10. **Inheritance**: Inheritance hierarchies involve constructors at each level of the hierarchy. The derived class constructor automatically calls the base class constructor to ensure proper initialization of both the base and derived parts.

Here's an example in C++ to illustrate constructor usage:

cpp
class MyClass {
public:
    int value;

    // Default Constructor
    MyClass() {
        value = 0; // Initialize value to 0
    }

    // Parameterized Constructor
    MyClass(int val) {
        value = val; // Initialize value with the provided argument
    }
};

int main() {
    MyClass obj1;        // Calls the default constructor, obj1.value is 0
    MyClass obj2(42);    // Calls the parameterized constructor, obj2.value is 42

    return 0;
}
In this example, we have both a default constructor and a parameterized constructor in the `MyClass` class. Depending on how we create objects, the appropriate constructor is invoked to initialize the `value` attribute.
*/