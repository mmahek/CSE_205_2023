#include<iostream>
#include<stack>//last - in - first - out

using namespace std;
//Array implementation of Stack
class Stack{
    public:
    //properties
    int *arr;
    int size;  
    int top;//Top keeps track of index of stack, it says if space is available in stack or not
    Stack(int size){
        this -> size = size;//specifing that this size and upper size are equal
        arr = new int[size];// creating new array
        top = -1;//setting the top to be -1
    }

    // behavior
    void push(int element){//insert new element in aarray
        //check if element is present 
        if (size - top > 1){
            top++;//Shift the top 
            arr[top] = element;//add element in array
        }
        else{ // Stack overflow
            cout << "Stack overflow!" << endl;            
        }
    }

    void pop(){//remove top element from array
        if(top >= 0){//Atleast 1 element is present in array
            top--;
        }
        else{
            cout << "Stack underflow!" << endl;
        }
    }

    int peek(){//show me the top element 
        if( top >= 0 ){//array must not be empty 
            return arr[top];
            }
            else{
                cout << "stack is empty" << endl;
                return -1;
            }
    }

    bool isEmpty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
    }
   };
int main(){
    Stack st(5);//stack created with size 5
    st.push(1);
    st.push(3);
    st.push(5);
    /*st.push(1);
    st.push(3);
    st.push(5);*///stack overflow

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    if(st.isEmpty()){
        cout << "Stack is Empty!" << endl;
    }
    else{
        cout << "Stack is not Empty!" << endl;
    }
    return 0;
    /*
    //creation of stack using Standard Template Library
    stack<int> st;

    //push operation
    st.push(2);
    st.push(3);

    //pop
    st.pop();

    //top or peek
    cout << "Print the top element: " << st.top() << endl;

    //check for empty
    if(st.empty()){
        cout << "Stack st is empty!" << endl;
    }
    else{
        cout << "Satck st is not empty!" << endl;
    }

    //size 
    cout << "Size of stack is : " << st.size() << endl;

    
    return 0;
    */ 
   //Creation of Stack using class
}
