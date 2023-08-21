#include <iostream>
using namespace std;


int search(int arr[], int size){
    int j, k, m = 0, p = 0;
    int evenArr[100];
    int oddArr[100];
    for (int i = 0 ; i < size ; i++){
        if( arr[i] % 2 == 0 ){
            evenArr[j] = arr[i];
            j++;
            m++;
        }
        else{
            oddArr[k]=arr[i];
            k++;
            p++;
        }
    }
}
int printit(int arr[]){
    int  m = 0, p = 0;
    for (int j = 0 ; j < m ; j++){
        cout << evenArr[j];
    }

    for (int k = 0 ; k < p ; k++){
        cout << oddArr[k];
    }
    return 0;
}
int main()
{
    int size ;
    cout << "Enter the size for array : "  << endl;
    cin >> size;

    int arr[size];
    for (int i = 0 ; i < size ; i++){
        cout << "arr["<<i<<"]" ;
        cin >> arr[i];
    }

    search(arr, size);

    
    return 0;
}