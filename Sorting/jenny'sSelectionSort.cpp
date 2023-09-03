#include <iostream>
using namespace std;

//Select the smallest element and put it at its right place
//divide the array in sorted and unsorted arrays
void selectionSort(int a[], int size){
    //suppose that the element at 0th index is smalest and then start to compare it
    for(int i = o ; i < n-1 ; i++){
        //consider first element be the smallest element
        int min = i; //i = 0 
        //linear search to find the smallest element
        for(int j = i + 1; j <){//j=1
            if(a[j] < a[min]){//min == i =0
                min = j;//update the minimum element's index
            }
        } 
        if( min != i){
            swap(a[i], a[min]);
        }
    }
}

//Time complexity : O(n^2) both in best and worst cases.
int main(){
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    selectionSort(arr, size);

    cout << "Sorted Array is : [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
    return 0;
}