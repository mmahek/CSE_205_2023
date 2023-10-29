#include<iostream>
#include<stack>
using namespace std;

/*
*/

void insertAtBottom(stack<int> &s, int e){// e is the element which has been removed from stack
    if(s.empty()){//base case
        s.push(e);
        return;
    }
    //take out the top
    int a = s.top();
    s.pop();
    // recursive call
    insertAtBottom(s, e);//calling insertAtBottom function with same agruments as initial so that remove all the element to make way for the botoom element
    s.push(a);// putting the 
}

void reverse(stack<int> &inputStack){
    if(inputStack.empty()){//base case
        return ;
    }
    // take out the top
    int num = inputStack.top();
    inputStack.pop();
    // recursive call to remove the elements till stack is empty
    reverse(inputStack);

    //now empty stack return and while returning take the elements back and insert them at bottom recursively
    insertAtBottom(inputStack, num);// num is the element which has been removed from stack
}
int main(){
    stack<int> st;

    st.push(4);
    st.push(3);
    st.push(2);
    st.push(100);

    stack<int> t = st;

    cout << "Before reversal: " ;
    while(!t.empty()){
        cout << t.top() << " ";
        t.pop(); 
    }
    cout << endl;
    reverse(st);

    cout << "After reversal: "; 
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}