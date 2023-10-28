#include <iostream>
#include <stack>
using namespace std;

void deleteMiddle(stack<int> &inputStack, int count, int size)
{
    // count to track the number of elements poped out

    // base case - count == size/2, reached the middle of stack thus return and delete the element
    if ( count == size / 2)
    {
        inputStack.pop();//deleting the middle element
        return;
    }
    int num = inputStack.top();//when control have'nt reached the middle so remove and save this to put back in stack
    inputStack.pop();//delete the non middle element from stack to reach the middle element 

    // recursive call
    deleteMiddle(inputStack, count + 1, size);

    //wapasi, jo nikala tha woh push kardo
    inputStack.push(num);//putting back the non middle elements- jo nikal ke rakha tha woh wapas le jaao
}

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    //s.push(5);
    //s.push(6);
    //s.push(7);

    int size = s.size()  ; // size gives number of elemnets

    // temporary stack
    cout << "Stack before deletion: ";
    stack<int> tempStack = s;
    while (!tempStack.empty())
    {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    deleteMiddle(s, 0, size);

    cout << "Stack after deletion: ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}