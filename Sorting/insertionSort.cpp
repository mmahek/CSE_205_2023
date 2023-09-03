#include <iostream>
using namespace std;
// hw: write insertion sort with while loop
void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];//taking backup of element and then comparing it to the rest of elements and then shifting to put it at its right place
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            { //shift till the element in temp is smaller than jth element of array
                arr[j + 1] = arr[j]; // not swapping but shifting logic
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;//store the first element of unsorted sub-array into temp
    }
}
int main()
{
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    insertionSort(arr, 7);

    cout << "Insertion Sort \n" ;
    cout << "[ ";
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}