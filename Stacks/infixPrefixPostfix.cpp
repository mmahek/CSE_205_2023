#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

//  Infix expression: operand, operator, operand (BODMAS)

/*  Precedence: (), {}, []  |
                ^           |   R->L
                *, /        |   L->R
                +, -        |   L->R

*/
/*  (Pollish notation)
    Prefix: operator, operand, operand
    Q. Write prefix expression from infix expression.
    e.g. ((4*2)+3) -> oprator comes before bracket: +* 4 2 3
    e.g. ((5/4)+9) -> +/ 5 4 9
    e.g. (3-(9/2)) -> -3 / 9 2
 */
/*  (Reverse Pollish Notation)
    Postfix: oprand, operator, opreator
    e.g. ((4*2)+3) -> 4 2 * 3 +
    e.g. (5-(9/4)) -> 5 9 4 / -
*/

/*  Q. Calculate: -+7*45+20


*/
int prefixEval(string s)
{
    stack<int> st;
    for (int i = s.size() - 1; i >= 0; i--)
    { // itrating right to left thus decrement(reverse order)
        if (s[i] >= '0' && s[i] <= '9')
        {                        // operands
            st.push(s[i] - '0'); // way to convert char to integer type
        }
        else
        { // operator
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operand1 + operand2);
                break;
            case '-':
                st.push(operand1 - operand2);
                break;
            case '*':
                st.push(operand1 * operand2);
                break;
            case '/':
                st.push(operand1 / operand2);
                break;
            case '^':
                st.push(pow(operand1, operand2));
                break;
            }
        }
    }
    return st.top();
}

int postfixEval(string s){
    stack<int> st;
    for (int i = 0 ; i < s.size(); i--)
    { // itrating right to left thus decrement(reverse order)
        if (s[i] >= '0' && s[i] <= '9')
        {                        // operands
            st.push(s[i] - '0'); // way to convert char to integer type
        }
        else
        { // operator
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operand1 + operand2);
                break;
            case '-':
                st.push(operand1 - operand2);
                break;
            case '*':
                st.push(operand1 * operand2);
                break;
            case '/':
                st.push(operand1 / operand2);
                break;
            case '^':
                st.push(pow(operand1, operand2));
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    string s = "-+7*45+20";//do not include spaces
    string s1 = "42*3+";
    cout << prefixEval(s) << endl;
    cout << postfixEval(s1) << endl;
    return 0;
}