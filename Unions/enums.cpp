#include <iostream>
using namespace std;

enum seasons{// could have been written in single line , here it is written o that readability increases
    summer = 10,
    rainy = 39,
    winter = 47,
    autumn = 123, 
    spring = 56
};

int main(){
    seasons s1;
    s1 = spring;

    cout << s1 << endl;
    
}