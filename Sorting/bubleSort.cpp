#include <iostream>
using namespace std;

// The base element will reach at it's right place first
// The basic operation is comparison and swapping of the greater element till it gets its right place
// It starts from from index 0
//when the bubble sort runs, after its first iteration, it makes the largest element bubble up at the last by constant comparision and swapping
//in next iteration, again the same logic is applied and second largest element bubbles up at the second last position. THe largest element is not touched. 
//number of iteration= number of elements -1 and 
//there will be two loops , 1: outer loop(executed for n-1 times) for passes i.e. element will be compared with every other element and swapped till largest element reaches its right position and 2: inner loop (executed n-1 times) will be for each element and ultimately reaching the sorted array

int main()
{
    int n, temp, flag;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        {
        flag = 0;
        cout << "a[" << i << "] = ";
        cin >> a[i];
        }
    for(int i = 0 ; i < n-1 ; i++ ){
        for(int j = 0; j < n-1-i ; j++){ //n-1-i reduces the comparisions made as they are not required really thus less complexity
            if(a[j]>a[j+1]){// control will enter here only when swapping is required 
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag = 1;
            }
        }
        if( flag == 0){// when the array is already sorted and no more comparisions are needed thus reduce the iterations of outer loop i.e. leading to more optimization
            break;// move the control out of for loop and no more comparisions are made.
        }
    }
    cout << "Bubble Sorted Array is : [";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "]";
}
//Time complexity: Best case : O(n)
//Worst Case: O(n^2)




// void bubbleSort(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         bool swapped = false;
//         for (int j = 0; j < size - i; j++)
//         { // size -i because we have already arranged the greatest element at last thus there is no need of sorting it again and again.
//         // if not a single value is swapped, then the program will not enter the if..else condition, called  BEST CASE
//         // Time Complexity in BEST CASE will be O(n) as the outer loop is still running.
//             // Listen to yourself, don't go will crowd
//         if (arr[j] > arr[j + 1]) // when program enter this , it means that array is not sorted
//         {
//         swap(arr[j], arr[j + 1]); // There will be an error when j reaches the end  as there will be no (j+1)th element.
//         swapped = true;
//         }
//         }
//         if (swapped = false)
//         {
//             break;
//         }
//     }
// }

// // Time Complexity : O(size^2)

// // Space Complexity :
// int main()
// {
//     int size;
//     cout << "Enter the size of array : ";
//     cin >> size;
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cout << "a[" << i << "] = ";
//         cin >> arr[i];
//     }

//     bubbleSort(arr, 7);

//     cout << "Sorted Array is : [";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "]";
//     return 0;
// }