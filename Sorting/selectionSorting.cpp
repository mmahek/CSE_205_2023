#include <iostream>
using namespace std;
// search for the minimum value element in the entire array and place it on it's right position
//  Consider the first element to be the smallest and then check in the rest of the array for another smaller element, if exists then swap the value of element at zeroth index with it.
//  and the saga goes on...
//  When there are n number of elements, the selection of smallest elements and arranging them in sorted manner, will take (n-1) iterations.

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) // j is working till size as
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j; // changing the value for minimum
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

// Space Complexity : it takes same space thus space complexity is O(1)

// Time Complexity : O(size^2)

// Best case the array is all ready sorted i.e. the first element is the smallest element itself, but the algorithm will still search in the whole array as it is what it's work is.

int main()
{
    int size;
    cout << "Enter the size of array : " ;
    cin >> size ;
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

    // int arr[6] = {4, 6, 2, 3, 9, 8};
    // selectionSort(arr, 6);

    // // printing the sorted array
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // return 0;
}