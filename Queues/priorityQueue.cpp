#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    greater<int> pq;

    pq.push(1);//1
    pq.push(2);//2,1
    pq.push(3);//3,2,1
    pq.push(4);//4,3,2,1

    pq.size();

    //cout << pq.size();

    while(!pq.empty()){
        int val = pq.top();
        cout << val << " ";
        pq.pop();
    }
    return 0;
}