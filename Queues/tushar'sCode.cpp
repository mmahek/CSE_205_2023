#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int *arr;
    int size;
    int front;
    int back;

public:
    Queue(int n)
    {
        size = n;
        arr = new int[n];
        front = 0;
        back = 0;
    }
    void push(int element)
    {
        if (back == size)
        {
            cout << "Queue if full" << endl;
            return;
        }
        arr[back] = element;
        back++;
    }
    int pop()
    {
        if (front == back)
        {
            return -1;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            // Checking if queue is empty after operation then again reinitializing the front and back to save the memory
            if (front == back)
            {
                front = 0;
                back = 0;
            }
            return ans;
        }
    }
    bool empty()
    {
        if (front == back)
        {
            return true;
        }
        return false;
    }
    int Front()
    {
        if (front == back)
        {
            return -1;
        }
        return arr[front];
    }
    int Back()
    {
        if (front == back)
        {
            return -1;
        }
        return arr[back - 1];
    }
};
int main()
{
    // Don't forget to pass the size while creating object as default constructor is not used!
    Queue q1(2);
    q1.push(20);
    q1.push(10);
    cout << q1.Front() << endl;
    cout << q1.Back() << endl;
    return 0;
}