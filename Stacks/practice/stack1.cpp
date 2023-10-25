// #include<iostream>
// #include<stack>
// using namespace std;
// //STL
// /*int main(){
//     //Last - In - First - Out
//     //creation
//     stack<int> s;

//     //push operation
//     s.push(1);
//     s.push(2);

//     //pop
//     s.pop();

//     cout << "Top element : " << s.top();

//     if(s.empty()){
//         cout << "\nStack is empty";
//     }
//     else{
//         cout << "\nStack is not empty";
//     }
//     cout << "\nSize of stack is: " << s.size();
//     return 0;
// }
// */

// //  Stack can be implemented by Array and Linked list

// class Stack{
//     //properties
//     public:
//     int *arr;
//     int top;
//     int size;

//     //behaviour
//     //constructor
//     Stack(int size){
//         this -> size = size;//initializing size
//         arr = new int[size];//creating array
//         top = -1;//top is initialized
//     }

//     void push( int element){
//         //check if space is available, atleast 1 space be available to add element
//         if(size - top < 1){//space is available
//             top++;//shift the top
//             arr[top] = element;//add the element
//         }
//         else{//space not availaible
//             cout << "Stack overflow" << endl;
//         }
//     }

//     void pop(){//check if element is present in array
//     //atleast 1 element should be thier to pop
//         if(top >= 0){//eleemnt is available
//         top--;
//         }
//         else{
//             cout << "Stack underflow" << endl;
//         }
//     }

//     void peek(){
//         if (top >= 0 && top < size){//value range
//             return s.top();//returns top element
//         }
//         else{
//             cout << "Stack is Empty" << endl;
//             return -1;
//         }
//     }

//     bool isEmpty(){
//         if(top == -1){
//             return true;
//         }
//     }
// };
// int main(){
//     Stack st(5);
//     st.push(22);
//     st.push(43);
//     st.push(44);

//     // st.push();
//     // st.push(22);

//     cout << st.peek() << endl;
// }

#include <iostream>
using namespace std;

class Stack{
public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if (top < size - 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack overflow" << endl;
        }
    }

    void pop(){
        if (top >= 0){
            top--;
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }

    int peek(){
        if (top >= 0 && top < size){
            return arr[top];
        }
        else{
            cout << "Stack is Empty" << endl;
            return -1; // indicating empty stack with -1
        }
    }

    bool isEmpty(){
        return top == -1;
    }
};

int main(){
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);

    int topElement = st.peek();
    if (topElement != -1){
        cout << "Top element: " << topElement << endl;
    }

    st.pop();
    topElement = st.peek();
    if (topElement != -1){
        cout << "Top element after pop: " << topElement << endl;
    }

    if (st.isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }

    return 0;
}
/*
    Corrections made :
    1. *
    *Initialization Check ** : In the `push` function,
    added a check `top < size - 1` to prevent overflow.

    2. *
    *Return Type of `peek`** : Changed the return type of `peek` to `int` and added a default return value of `- 1` to indicate an empty stack.

    3. *
    *Return in `peek`* * : In the `peek` method,
    when the stack is empty, it returns `- 1`.

    4. *
    *Print Statements ** : Used appropriate print statements to display stack status and top elements.*/