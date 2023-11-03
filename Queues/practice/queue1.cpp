#include<iostream>
#include<queue>
using namespace std;
/*
    Queue is a data structure which has firts in first out - FIFO system
    - When pushed, it takes place on rear part of queue
    - When poped, it is done from front part of queue
*/
int main(){
    queue<int> q;
    q.push(3);
    q.push(5);
    q.push(-8);
    cout << "Front : " << q.front() << endl;
    q.push(-6);
    cout << "Back : " << q.back() << endl;
    q.push(44);
    

    cout << "Size : " << q.size() << endl;
    q.pop();
    cout << "Size : " << q.size() << endl;
    q.pop();
    
    if(q.empty()){
        cout <<  "Empty" << endl;
    }
    else{
        cout << "Not Empty" << endl;
    }

    return 0;
}