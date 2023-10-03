#include<iostream>
using namespace std;

void merge(int* arr int s, int e){
    int mid = (s+e)/2;

    int len1 = mid - s + 1;

    int* first  = new int[len1];//created new array soring left part of original array
    int *second = new int[len2];// created new array soring right part of original array

    int k = s;
    for(int i = 0; i <len1; i++){
        first[i] = arr[k++];//assigning/coping the values of left part of original array till mid point
    }

    k = mid + 1;
    for(int i = 0; i < len2 ; i++){
        second[i] = arr[k++]; // assigning/coping the values of right part of original array from mid point
    }

    int index1 = 0;
    int index2 = 0;

    k = s;//starting point

    while(index1 < len1 && index2 < len2){
        if( first[index1] < second[index2] ){
            arr[k] = first[index1];//compare/check and put it at first
        }
        else{
            arr[k++] == second[index2++];
        }
    }
    while(index1 < len1 ){
        arr[k++] = first[index1++];
    }
    while(index2 < len2){
        arr[k++] = second[index2++];
    }

    delete []first;
    delete []second;
}
void mergeSort(int* arr , int s, int e){
    if(s >= e){//base case
        return;
    }

    int mid = (s+e)/2;

    mergeSort(arr, s, mid);

    mergeSort(arr, mid+1, e);

    merge(arr, s, e);

}

int main(){
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, size - 1);
    for(int i = 0; i < size ; i++){
        cout << arr[i] << endl;
    }
    return 0;
}