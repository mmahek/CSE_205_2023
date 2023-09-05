// Write a C++ class called "Rectangle" that has two private member variables: "length" and "width". The class should have a constructor that initializes these member variables and public member functions called "getArea" and "getPerimeter" that return the rectangle's area and perimeter, respectively.
#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int width;


    public:
    Rectangle(int len, int wid){
        length = len;
        width = wid;
     }
    
    int getArea(){
        return length*width;
        //cout << "Area = " << area << endl;
    }

    int getPerimeter(){
        return 2 * (length + width);
        //cout << "Perimeter = " << perimeter << endl;

    }
};
int main(){
    Rectangle r1(4, 8);

    int area = r1.getArea();
    int perimeter = r1.getPerimeter();
    // e1.getArea();
    // e1.getPerimeter();
    cout << "Area: "<< area << endl;
    cout << "Perimeter: " << perimeter << endl;
    return 0 ;

}
