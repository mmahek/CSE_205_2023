#include <iostream>
using namespace std;

// The base element will reach at it's right place first
// The basic operation is comparison and swapping of the greater element till it gets its right place
// It starts from from index 0
// when the bubble sort runs, after its first iteration, it makes the largest element bubble up at the last by constant comparision and swapping
// in next iteration, again the same logic is applied and second largest element bubbles up at the second last position. THe largest element is not touched.
// number of iteration= number of elements -1 and
// there will be two loops , 1: outer loop(executed for n-1 times) for passes i.e. element will be compared with every other element and swapped till largest element reaches its right position and 2: inner loop (executed n-1 times) will be for each element and ultimately reaching the sorted array

int main()
{
    int n, temp, flag;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        flag = 0; // modification is needed when in  any pass no swapping occurs or not required thus array is sorted hence no requore ment of more pass
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        { // n-1-i reduces the comparisions made as they are not required really thus less complexity
            if (a[j] > a[j + 1])
            { // control will enter here only when swapping is required
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) // modification is needed when in  any pass no swapping occurs or not required thus array is sorted hence no requore ment of more pass
        {              // when the array is already sorted and no more comparisions are needed thus reduce the iterations of outer loop i.e. leading to more optimization
            break;     // move the control out of for loop and no more comparisions are made.
        }
    }
    cout << "Bubble Sorted Array is : [";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "]";
}
// Time complexity: Best case (already sorted): O(n)
// Worst Case (array arranged in decending order): O(n^2+1-2n) i.e. O(n^2) 
 