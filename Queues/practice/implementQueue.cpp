#include<iostream>
using namespace std;

/*
    Tim Complexity of every Function is O(1) thus overall time complexity is O(q)
*/
class Queue{
    /*--------------Properties of QUEUE------------*/
    public:
    int *arr;
    int qfront;
    int rear;
    int size;

    public:
    Queue(int size){
        //Implement the constructor
        size = 10000;
        qfront = NULL;
        rear = NULL;
        int arr = new int[size];
    }
    /*------------Functions or Behaviours of QUEUE----------*/
    bool isEmpty(){      
        if(qfront == rear){
            return true;
        }  
        else{
            return false;
        }
    }

    void enqueue(int data){
        if(rear == size){
            //queue is full no space availaible
            cout << "Queue Overflow!" << endl;
        }
        else{
            //queue has space
            arr[rear] = data;//put the data
            rear++;//shift the rear
        }
    }

    void dequeue(){
        if(qfront == rear){
            //queue is empty
            cout << "Queue Underflow" << endl;
        }
        else{
            //queue has some space
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                //if queue has emptied
                qfront = 0;
                rear = 0;
            }
            cout << "Ans : " << ans;
        }
    }

    int qfront(){
        if(qfront == rear){
            //queue is empty
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};
int main(){

    return 0;
}