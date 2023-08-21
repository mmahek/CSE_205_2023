#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;//key found thus shift to the other side of array and search there
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;//on the other side, the key was not found thus return the value which was stored in ans
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 3};
    cout << "last occurence of 3 is " << firstOcc(arr, 5, 3);
}