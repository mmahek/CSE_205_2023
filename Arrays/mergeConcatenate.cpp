#include <iostream>
using namespace std;
int main(){
    int a[10], b[10], m = 5, n = 4;

    //array1
    cout << "Enter the elements for Array 1: " << endl;
    for(int i = 0; i < m ; i++){
        cout << "a[" << i << "] = " ;
        cin >> a[i];
        cout << endl;
    }
    cout << "Array 1:" << endl;
    for(int j = 0; j < m ; j++){
        cout << "a[" << j <<"] = " << a[j] << endl;
    }
    cout << endl;
    cout << endl;


    //array2
    cout << "Enter the elements for Array 2: " << endl;
    cout << "Array 2:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "b[" << i << "] = ";
        cin >> b[i];
        cout << endl;
    }

    for (int j = 0; j < n; j++)
    {
        cout << "b[" << j << "] = " << b[j] << endl;
    }
    for(int i = 0; i < n ; i++){
        a[m + i] = b[i];
    }
    cout << endl;
    
    cout << "Merged array:" << endl;
    for (int j = 0; j < m+n; j++)
    {
        cout << "a[" << j << "] = " << a[j] << endl;
    }
    cout << endl;
    cout << endl;
}