#include <iostream>
using namespace std;

// The base element will reach at it's right place first
// The basic operation is comparison and swapping of the greater element till it gets its right place
// It starts from from index 0

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - i; j++)
        {   // size -i because we have already arranged the greatest element aty last thus there is no need of sorting it again and again.
            // if not a single value is swapped, then the program will not enter the if..else condition, called  BEST CASE
            // Time Complexity in BEST CASE will be O(n) as the outer loop is still running.
            // Listen to yourself, don't go will crowd
            if (arr[j] > arr[j + 1])
            {                             // when program enter the is , it means that array is not sorted
                swap(arr[j], arr[j + 1]); // There will be an error when j reaches the end  as there will be no (j+1)th element.
                swapped = true;
            }
        }
        if (swapped = false)
        {
            break;
        }
    }
}

// Time Complexity : O(size^2)

// Space Complexity :
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

    bubbleSort(arr, 7);

    cout << "Sorted Array is : [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
    return 0;
}