// binary search works on monotonous arrays i.e. sorted elements, either in ascending or decending

// the time complexity of binary search is log(n)
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        // 1
        if (arr[mid] == key)
        {
            return mid;
        }

        // 2 right
        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        // 3 left
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2; // new mid for every iteration
    }
    cout << "Element does not exists.";
}
int main()
{
    int evenArr[6] = {2, 4, 5, 7, 8, 9};
    int oddArr[5] = {2, 3, 4, 5, 6};

    int evenIndex = binarySearch(evenArr, 6, 9);
    cout << "Index of 9 : " << evenIndex << endl;

    int oddIndex = binarySearch(oddArr, 5, 5);
    cout << "Index of 5 : " << oddIndex << endl;
    return 0;
}