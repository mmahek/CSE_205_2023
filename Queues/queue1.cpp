#include<iostream>
usin namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    Node* front;
    Node* rear;

    public:
    Queue(){
        front = NULL;
        rear = NULL;
    }

    void push(int x){
        Node* n = new  Node(x);//creation of new node and its value
        if(front == NULL){
            //thus empty queue
            rear = n;
            front = n;
            return; 
        }
        rear->next;//rear pointer will point to new element added
        rear = n;//data of rear node is set 
    }

    void pop(){
        if(front == NULL){
            cout <<"Queue underflow" << endl;
            return;
        }
        Node* del = front;
        front = front->next;

        delete del;
    }
};
int main(){
    return 0;
}