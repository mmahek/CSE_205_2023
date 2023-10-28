// #include<iostream>
// #include<stack>
// using namespace std;

// //  Time Complexity -   O(n) because one for loop
// // Space Complexity -   O(n) because of te use of stack data structure

// bool isValid(string exp){
//     stack<char> c;
    
//     for( int i = 0; i < exp.length() ; i++){//taking all characters one by one
//         char t = exp[i];//taking one char and current char racter
//         if (t == '[' || t == '{' || t == '('){
//             cout << "Opening bracket Enc\n";   //opening bracket encountered       
//             c.push(t);//put it into stack
//         }
//         else{//closing bracket encountered
//         if(!c.empty()){//there can be a possibility of stack being empty thus put a check
//         //stack is not empty here
//         cout << "Stack is not empty\n";
//             char check = c.top();//securing the top of stack to check of balance and t is current char

//             //matching conditions
//             if( (t == ')' && check == '(')    || //type 1
//                 (t == '{' && check == '}')    || //type 2
//                 (t == '[' && check == ']')    ){ //type 3
//                    c.pop();    }
//             else{//no match
//             cout << "No match found\n";
//                 //return false;
//             }
//         }
//         else{
//             //stack is empty
//             cout << "Stack is empty\n";
//             //return false;
//         }
//     }
//     return c.empty();
//     // check for processing of stack
//     if (c.empty())
//     // {
//     //     // if stack is empty thus right processing
//     //     cout << "right processing\n";
//     //     // return true;
//     // }
//     // else
//     // {
//     //     // if stack is still not empty then there is some error in processing
//     //     cout << "Wrong processing\n";
//     //     // return false;
//     // }
// }
// }
// int main(){
//     string str = "[)]";
//     if( isValid(str)){
//         cout << "THe parenthsis are balanced" << endl;
//     }
//     else{
//         cout << "The parenthesis are not balanced" << endl;
//     }
//     //cout << isValid(str);
//     return 0;
// }
#include <iostream>
#include <stack>
using namespace std;

//  Time Complexity -   O(n) because one for loop
// Space Complexity -   O(n) because of te use of stack data structure

bool isValid(string exp) {
  stack<char> c;

  for (int i = 0; i < exp.length(); i++) {
    char t = exp[i];
    if (t == '[' || t == '{' || t == '(') {
      c.push(t);
    }
    else {
      if (!c.empty()) {
        char check = c.top();
        if ((t == ')' && check == '(') || (t == '}' && check == '{') || (t == ']' && check == '[')) {
          c.pop();
        }
        else {
          return false;
        }
      }
      else {
        cout << "stavck is empty";
        return false;
      }
    }
  }

  // Check if the stack is empty.
  return c.empty();
}

int main() {
  string str = "{]}";
  if (isValid(str)) {
    cout << "The parentheses are balanced." << endl;
  } else {
    cout << "The parentheses are not balanced." << endl;
  }

  return 0;
}
