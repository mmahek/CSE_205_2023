#include <iostream>
#include <stack>
#include <sstream>
using namespace std;
int main()
{
    string input;
    string word;
    stack<string> stack1;
    getline(cin, input);
    stringstream ss(input);
    while (ss >> word)
    {
        stack1.push(word);
    }
    while (!stack1.empty())
    {
        cout << stack1.top() << " ";
        stack1.pop();
    }

    cout << endl;

    return 0;
}