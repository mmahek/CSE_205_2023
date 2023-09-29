#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int fromt;
    int rear;
    int size;

    public:
    Queue(){
        arr = new int[size];
        front = -1;
        rear = -1;
        //as soon as a element is added, these front and rear will point at it
        //addition will take place at the last i.e. rear and deletion will take place from front

    }
    void push(int x){
        if(rear = size-1){//edge case
            //rear pointer is already at the last pointer of array thus overflow condition
            cout << "Queue ended Overflow" << endl;
            return;
        }
        rear++;
        arr[rear] = x;//addition will be at back

        if(front == -1){//only case
            front++;//deletion will be taking place at front
        }
    }
    void pop(int x){
        if(front == -1 || front > back){
            cout <<"Queue is empty, underflow" << endl;
            return;
        }
        front++;//shift the pointer 
        //this is done to save cost and reduce time complexity
    }
};


int main(){
    return 0;
}