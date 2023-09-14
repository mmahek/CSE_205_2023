#include<iostream>
#include <stack>
using namespace std;

bool isValid(string s){
    stack<char> st;
    bool ans = true;
    //iterate over the string s
    for(int i = 0 ; i < s.size() ; i++){
        
        
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        { //  if opening type, push it into the stack and
            st.push(s[i]);
        }
        //for "("
        else if(s[i] == ')')
        { //  if it is of closing type then compare it with the top of stack
        //stack must not be empty
        if(!st.empty() && st.top() == '('){
            st.pop();//both are balanced
        }
        else{
            //not balanced thus break the loop
            ans = false;
            break;
        }
        //for "{"
        }
        else if (s[i] == '{')
        { //  if it is of closing type then compare it with the top of stack
        // stack must not be empty
        if (!st.empty() && st.top() == '{')
        {
            st.pop(); // both are balanced
        }
        else
        {
            // not balanced thus break the loop
            ans = false;
            break;
        }
        }
        //for "["
        else if (s[i] == '[')
        { //  if it is of closing type then compare it with the top of stack
        // stack must not be empty
        if (!st.empty() && st.top() == '[')
        {
            st.pop(); // both are balanced
        }
        else
        {
            // not balanced thus break the loop
            ans = false;
            break;
        }
        }
    }
    if(!st.empty()){
        //stack still not empty thus not balanced
        return false;
    }
    //stack is empty ths blanced
    return true;
}
int main(){
    string s = "[({()})]";
    if(isValid(s) == true){//it can be false as well or !isValid(s)
        cout << "IsValid" << endl;
    }
    else{
        cout << "Invalid" << endl;
    }
    return 0;
}