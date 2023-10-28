// #include<iostream>
// #include<stack>
// using namespace std;

// void deleteMiddle( stack<int> &inputStack, int count, int size){
//     //base case, count == size/2
//     if(count == size/2){
//         inputStack.pop();
//         return;
//     }

//     int num = inputStack.top();
//     inputStack.pop();

//     deleteMiddle(inputStack, count + 1, size);
//     inputStack.push(num);

// }
// int main(){

//     stack<int> s;
//     s.push(1);
//     s.push(4);
//     s.push(5);
//     s.push(7);
//     s.push(8);
//     s.push(9);
//     //s.push(0);

//     int size = s.size();
//     stack<int> tempStack = s;
//     cout << "Stack before deleteion : " ;
//     // while(!tempStack.empty()){
//     //     cout << tempStack.top() << " ";
//     //     tempStack.pop();
//     // }

//     for (int j = tempStack.size(); j > 0 ; j--){
//         cout << tempStack.top() << " ";
//         tempStack.pop();
//     }

//     deleteMiddle(s, 0 ,size);
//     cout << "\nStack after deltion : " ;
//     for (int j = s.size() ; j > 0; j--){
//         cout << s.top() << " ";
//         s.pop();
//     }

//     return 0;
// }

#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle( stack<int> &inputStack, int count, int size){
    if( count == size/2 ){
        inputStack.pop();
        return;
    }

    int store = inputStack.top();
    inputStack.pop();

    deleteMiddle(inputStack, count + 1 , size);
    inputStack.push(store);
}  

int main(){

    stack<int> s;
    s.push(1);    
    s.push(5);
    s.push(4);
    s.push(3);

    int size = s.size();
    stack<int> tempStack = s;
    cout << "Before Deletion : " ;
    for(int j = size ; j > 0 ; j--){
        cout << tempStack.top() << " ";
        tempStack.pop();
    }

    deleteMiddle(s, 0, size);
    cout << "\nAfter deletion : ";
    for(int j = size; j > 0 ; j--){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}