#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size) // method for printing array
{
    for (int j = 0; j < size; j++) // giving output of array
    {
        cout << arr[j] << "  ";
    }
    cout << endl;
}
int main()
{
    int evenArr[6] = {2, 4, 6, 7, 5, 4};
    int oddArr[5] = {3, 4, 5, 6, 7};

    cout << "Before Reversing : " << endl;
    printArray(evenArr, 6);
    printArray(oddArr,5);

    //reversing the array
    reverse(evenArr, 6);
    reverse(oddArr,5);
    
    cout << "After reverse:     " << endl;
    printArray(evenArr, 6);
    printArray(oddArr, 5);
    return 0;
}