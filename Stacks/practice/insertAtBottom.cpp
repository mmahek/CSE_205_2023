#include<iostream>
#include<stack>
using namespace std;


void insertAtBottom(stack<int> &iStack, int x){
    //base case
    if(iStack.empty()){
        iStack.push(x);
        return;
    }
    int n = iStack.top();
    iStack.pop();
    insertAtBottom(iStack, x);
    iStack.push(n);
}
int main(){
    cout << "First question totally solved by me!" << endl;
    stack<int> s;
    s.push(1);//at bottom of stack s
    s.push(2);
    s.push(3);
    s.push(4);

    stack<int> tempStack = s;
    cout << "Before insertion: ";
    while(!tempStack.empty()){
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    int x = 5;

    insertAtBottom(s, x);

    cout << "\nAfter insertion: ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}