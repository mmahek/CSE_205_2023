#include <iostream>
using namespace std;

//power
class Number{
    int a;

    public:
    Number(){
        cout << "Default Constructor" << endl;
        a = 0;
    }

    Number(int num){
        cout << "Parameterized constructor" << endl;
        a = num;
    }
    Number(Number &obj){//object in memory to copy the skill, like KAKASHI
        //passing by reference because we want to make changes in th original class and not the copy of it
        cout << "Copy Constructor" << endl;
        a = obj.a;
    }

    void display(){
        cout << "The value of a is " << a << endl;
    }
};


int main(){
    Number n1;//default constructor
    n1.display();
    Number n2(10);
    n2.display();


    Number n3(n1);
    n3.display();
    return 0;
}
// A copy constructor is a special type of constructor in object-oriented programming languages like C++ and C#. Its primary purpose is to create a new object by copying the contents of an existing object of the same class. Copy constructors are automatically called when you create a new object as a copy of an existing object. They ensure that the copy is a deep copy, meaning that it creates a new instance with copied values, not just a reference to the existing object.

/*
Here are some key points to understand about copy constructors :

    1. * *Usage ** : Copy constructors are used when you want to create a new object that is an exact copy of an existing object.

    2. * Signature ** : The copy constructor has a special signature.It takes a single argument of the same type as the class it belongs to,
    typically passed by reference or as a constant reference.It is commonly written as follows :

    
    3. **Automatic Invocation**: Copy constructors are called automatically in certain situations, such as when you initialize an object using another object of the same class or when you pass an object by value to a function.

    4. **Default Copy Constructor**: If you don't provide a custom copy constructor for your class, the compiler generates a default copy constructor for you. However, this default copy constructor performs a shallow copy, meaning it copies the values of member variables directly without considering any dynamically allocated resources. If your class manages resources like dynamic memory, it's often necessary to provide a custom copy constructor to ensure proper copying.

    5. **Deep Copy**: In cases where your class contains dynamically allocated memory or other resources, you should implement a custom copy constructor to perform a deep copy. This involves allocating new resources for the copy and copying the contents.

    6. **Example**:
    class MyClass
    {
    private:
    int *data; // Dynamic memory allocation example
    public:
    // Parameterized constructor
    MyClass(int value)
    {
        data = new int(value);
    }

    // Copy constructor
    MyClass(const MyClass &source)
    {
        data = new int(*(source.data)); // Deep copy of data
    }

    // Destructor (to release allocated memory)
    ~MyClass()
    {
        delete data;
    }
    };
    ```

    In the above example,
        the custom copy constructor `MyClass(const MyClass &source)` ensures that a deep copy of the `data` member is made, preventing both the original and the copy from sharing the same dynamically allocated memory.

    Usage of a copy constructor :

    cpp int main()
    {
    MyClass obj1(42);
    MyClass obj2 = obj1; // Copy constructor called, obj2 is a deep copy of obj1
    // Now, obj1 and obj2 have separate copies of the data, not sharing memory

    return 0;
    }
    In this usage,
    
    the copy constructor is automatically invoked when `obj2` is initialized with `obj1`, creating a new object that is a deep copy of the original object.
        */