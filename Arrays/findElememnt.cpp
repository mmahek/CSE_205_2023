#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)//returns index of target
{
    for (int i = 0; i < size; i++)//traverses all the elements of arra and searches for target
    {
        if (arr[i] == target)
        {
            cout << "THe index of target is ";
            return i;
        }
    }
    return -1;//when nothing returned by loop
}

int main()
{
    int size;
    cout << "Enter the size of array : " ;
    cin >> size ;

    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element to search for : " ;
    cin >> target ;
    
    cout << linearSearch(arr, size, target);
    return 0;
}
// You are given an array of integers, arr, containing n elements. Write a C++ function int linearSearch(int arr[], int n, int target) to perform a linear search and find the index of the first occurrence of the target element within the array. If the target element is not found, the function should return -1.
