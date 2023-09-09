#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;//stl : predifined

//abstraction : Don't care how things are working, but we use it to accomplish our goal

    //push
    s.push(1);//bottom level
    s.push(2);//above 1

    s.pop();
    s.pop();

    //cout << s.top() << endl;
    //at this point the pointer is pointing to null and hence execution stops here
    //cout <<"Size: " << s.size() << endl; 

    if(s.empty()){
        cout << "Stack is empty." << endl;
    }
    else{
        cout << "Stack is not empty." << endl;
    }
    return 0;
}