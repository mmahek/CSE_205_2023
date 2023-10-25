#include<iostream>
using namespace std;

class TwoStack{
    int *arr;
    int top1; 
    int top2;
    int size;

    public:

    //Constructor
    TwoStack(int s){
        this -> size = s;
        top1 = -1;
        top2 = size;
        int arr = new int[s];
    }

    void push1(int num){
        if(top2 - top1 > 1 ){
            //atleast 1 empty space be available
            top1++;
            arr[top1] = num;
        }
        else{
            cout << "Stack overflow" << endl;
        }
    }

    void push2(int num){
        if(top2 - top1){
            top2--;
            arr[top2] = num;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop1(){
        if(top1 >= 0){
            //array has atleast 1 element
            int ans = arr[top1];
            top1--;//decrement;
        }
        else{
            return -1;
        }
    }

    void pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;//increment
        }
        else{
            return -1;
        }
    }

};
int main(){
    #include<iostream>
using namespace std;

class TwoStack{
    int *arr;
    int top1; 
    int top2;
    int size;

    public:

    //Constructor
    TwoStack(int s){
        this -> size = s;
        top1 = -1;
        top2 = size;
        int arr = new int[s];
    }

    void push1(int num){
        if(top2 - top1 > 1 ){
            //atleast 1 empty space be available
            top1++;
            arr[top1] = num;
        }
        else{
            cout << "Stack overflow" << endl;
        }
    }

    void push2(int num){
        if(top2 - top1){
            top2--;
            arr[top2] = num;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    int pop1(){
        if(top1 >= 0){
            //array has atleast 1 element
            int ans = arr[top1];
            top1--;//decrement;
        }
        else{
            return -1;
        }
    }

    int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;//increment
        }
        else{
            return -1;
        }
    }

};
}
int main(){
    
        // Create a TwoStack object with a size of 5.
        TwoStack ts(5);

        // Push some elements onto the first stack.
        ts.push1(1);
        ts.push1(2);
        ts.push1(3);

        // Push some elements onto the second stack.
        ts.push2(4);
        ts.push2(5);

        // Pop an element from the first stack.
        cout << ts.pop1() << endl; // Prints 3

        // Pop an element from the second stack.
        cout << ts.pop2() << endl; // Prints 5

        // Pop all remaining elements from the first stack.
        while (ts.pop1() != -1)
        {
        }

        // Pop all remaining elements from the second stack.
        while (ts.pop2() != -1)
        {
        }

        return 0;
}