#include <iostream>
#include <stack>
using namespace std;

void deleteMiddle(stack<int> &inputStack, int count, int size)
{
    // count to track the number of elements poped out

    // base case - reached the middle of stack thus return and delete the element
    if (inputStack.empty() || count == size / 2)
    {
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    // recursive call
    deleteMiddle(inputStack, count + 1, size);
    inputStack.push(num);
}

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    int size = s.size() << endl; // size gives number of elemnets

    // temporary stack
    cout << "Stack before deletion: ";
    stack<int> tempStack = s;
    while (!tempStack.empty())
    {
        cout << tempStack.top();
        << " ";
        tempStack.pop();
    }
    cout << endl;

    deleteMiddle(s, 0, size);

    cout << "Stack after deletion: ";
    while (!tempStack.empty())
    {
        cout << tempStack.top();
        << " ";
        tempStack.pop();
    }
    cout << endl;
}