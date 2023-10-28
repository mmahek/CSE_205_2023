#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    //properties
    int size;
    int top;
    int *arr;

    //contrctor
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
        
    }

    //behavior

    void push(int element){
        //insert
        if( size - top > 1 ){
            //stack has atleast 1 space left
            top++;//shift
            arr[top] = element;//add element
        }
        else{
            //Stack kis full
            cout << "Stack overflow" << endl;
        }
    }

    void pop(){
        //delete
        if(top >= 0){
            //stack ha satleast one element in it
            top--;//delete
        }
        else{
            //no element present
            cout << "Stack underflow" << endl;
        }
    }

    int peek(){
        //return the top element
        if( top >= 0){
            cout << "top element is " << arr[top] << endl;
        }
        else{
            //stack is emtpy
            cout << "stack is empty" << endl;
        }
    }

    bool isEmpty(){
        //check for empty stack
        if(top == -1){
            cout << "Stack is empty" << endl;
        }
        else{
            cout << "Stack is not empty" << endl;
        }
    }
};

int main(){
    Stack st(3);

    st.push(11);
    st.push(23);
    st.push(45);
    st.peek();
    st.pop();
    st.peek();
    //st.push(67);
    /*
    //Creation of stack using Standard Template Library
    stack<int> st;

     st.push(1);
     st.push(4);
     st.push(7);

     st.pop();
     st.pop();
     
     cout << "Top element is : " << st.top() << endl;
     if(st.empty()){
        cout << "Stack is empty" << endl;
     }
     else{
        cout << "Stack is not empty." << endl;
     }
    return  0;
    */

}