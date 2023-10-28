#include<iostream>
#include<stack>
using namespace std;
//Time complexity is O(n).
int main(){
    string str = "samosa";
    stack<char> s;
    for(int i = 0 ; i < str.length(); i++){
        char p = str[i];
        s.push(p);
    }
    //stack created and filled with characters of str
    string ans = "";

    while(!s.empty()){
        char p = s.top();
        ans.push_back(p);
        s.pop();
    }
    cout << "Answer is  " << ans << endl;
    return 0;
}