#include <iostream>
using namespace std;

class Stack{

    int* arr;//not initialized
    int top;
    int size;

    public:
    Stack(){//constructor
        arr = new int[size];
        top = -1;//for initialization, it is put at -1 and when data is added to stack it is shifted, not a pointer just variable

    } 
    void push(int val){
        if(top == size -1){
            cout << "Stack overflow" << endl;
            return ;
        }
        top++;//top will come at 0th position of stack
        arr[top] = val;//goto position where top is pointing and add vall there
    }

    void pop(){
        if(top == -1){
            return ;
        }
        top--;//bring the top ptr at previous index  
    }

    int Top(){
        if(top == -1){
            cout << "No elements in stack" << endl;
            return -1;
        }
        return arr[top];
    }
    //sir one general ques if we are just decreasing the top can we still access the previous top using *(arr + size - 1)

    bool empty(){
        return top == -1;
    }
};
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.pop();

    cout << st.Top();
    return 0;
}