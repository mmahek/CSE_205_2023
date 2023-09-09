#include  <iostream>
using namespace std;

int main(){
    // string text = "I love you";
    // string sub_str = "you";
    // auto isFound = text.find(sub_str);

    // if(isFound != string::npos){
    //     cout << "sub String found at: " << isFound << endl;
    // }

string a =" Hello yo yo yo , this is your og gange welcoming you all";
// cout << "Enter a: ";
//     for (int i = 0; i<20 ; i++){
//         cin >> a[i];
//     }
//     for (int i = 0; i < 20; i++){
//         cout << a[i]<< " ";
//     }
string b;
cout << "Enter b: ";
    cin >> b ;
    auto isFound = a.find(b);

    if(isFound != string::npos){
        cout << b << " is present in the song." << endl;
    }
    else{
        cout << b << " is not present in the song." << endl;
    }
    }