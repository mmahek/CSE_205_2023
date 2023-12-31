#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &s, int e){
    //base case
    if(s.empty() || (!s.empty() && s.top() < e)){
        /*case1: stack is empty
        case2: stack is not empty but the num is greater than the top */
        s.push(e);
        return;
    }

    int a = s.top();
    s.pop();

    //recursive call
    sortedInsert(s, e);
    if(a>e){
        s.push(a);
    }    
}
void sortStack(stack<int> &s){
    //base condition
    if(s.empty()){
        return;
    }
    //remove element to side
    int num = s.top();
    s.pop();

    //recursive call to empty the stack
    sortStack(s);

    //when stack is emptied put element to its right place
    sortedInsert(s, num);
}
int main(){
    stack<int> st;
    st.push(5);
    st.push(-3);
    st.push(2);
    st.push(0);
    st.push(-8);

    stack<int> t = st;

    cout << "Before sorting: "; 
    while (!t.empty()){
        cout << t.top() << " ";
        t.pop();
    }
    cout << "After sorting: ";
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}