#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void deleteElement(int arr[], int &size, int position)
{
    if (position < 1 || position > size-1)
    {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = position - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;
}

int main()
{
    int size;
    int arr[MAX_SIZE];

    // Input
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int position;
    cin >> position;

    // Output original array
    cout << "Original array:";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    // Delete element at the specified position
    deleteElement(arr, size, position);

    // Output updated array only if the position is valid
    if (size > 0)
    {
        cout << "Updated array:";
        for (int i = 0; i < size; i++)
        {
            cout << " " << arr[i];
        }
        cout << endl;
    }

    return 0;
}