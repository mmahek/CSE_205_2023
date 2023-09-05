// Write a C++ class called "Employee" that has three private member variables: "name", "salary", and "employeeCode". The class should have a constructor that initializes these member variables and a public member function called "displayInfo" that prints out the employee's name, salary, and employeeCode.
#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
    string name;
    int salary;
    int employeeCode;

public:
    Employee(){
        name = "";
        salary = 0;
        employeeCode = 0;
    }
    Employee(string nName, int sSalary, int eEmployeeCode){
        name = nName;
        salary = sSalary;
        employeeCode = eEmployeeCode;
    }

    
    void displayInfo(){
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
        cout << "Employee Code : " << employeeCode<< endl;
    }
};
int main(){
    Employee e1;
    //e1.displayInfo();

    Employee e2("Akshay", 1000, 1001);
    e2.displayInfo();
    return 0;
}