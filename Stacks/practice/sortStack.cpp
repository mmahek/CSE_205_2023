#include<iostream>
#include<stack>
using namespace std;
/*

    **Time Complexity:**
- The `sortStack` function is called recursively for every element in the stack. In the worst case, it's called for N elements where N is the number of elements in the stack.
- Inside the `sortedInsert` function, the worst-case time complexity is (O(N)) where N is the number of elements in the stack. This is because in the worst case, the function has to iterate through all the elements in the stack to find the correct position for the new element.

Therefore, the overall time complexity of the sorting algorithm is (O(N^2)), where N is the number of elements in the stack.

    **Space Complexity:**
- The space complexity is (O(N)) due to the recursive calls. In the worst case, the function stack would have \(N\) recursive calls on it simultaneously, where \(N\) is the number of elements in the stack.
- Additionally, the space complexity of the input stack itself is (O(N)) as it contains N elements.

Therefore, the overall space complexity of the algorithm is \(O(N)\), where N is the number of elements in the stack.
*/

void sortedInsert(stack<int> &s, int e){
    //base case
    if(s.empty() || (!s.empty() && s.top() < e)){
        /*case1: stack is empty
        case2: stack is not empty but the num is greater than the top */
        s.push(e);
        return;
    }

    int a = s.top();
    s.pop();

    //recursive call
    sortedInsert(s, e);
    if(a>e){
        s.push(a);
    }    
}
void sortStack(stack<int> &s){
    //base condition
    if(s.empty()){
        return;
    }
    //remove element to side
    int num = s.top();
    s.pop();

    //recursive call to empty the stack
    sortStack(s);

    //when stack is emptied put element to its right place
    sortedInsert(s, num);
}
int main(){
    stack<int> st;
    st.push(5);
    st.push(9);
    st.push(2);
    st.push(0);
    st.push(-8);

    stack<int> t = st;

    cout << "Before sorting: "; 
    while (!t.empty()){
        cout << t.top() << " ";
        t.pop();
    }
    sortStack(st);
    cout << "After sorting: ";
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}