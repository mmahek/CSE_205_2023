// #include<iostream>
// using namespace std;
// int main(){
//     int a[50], size;
//     cout << "Enter the size of array: ";
//     cin >> size ;
//     cout << endl;
    
//     if(size >= 50 ){
//         cout << "It is an overflow, please consider making new array for your use!";
//     }
//     else{
//         cout << "There is space for insertion of new data in array for your use!" << endl;
//         cout << "Enter the elements of array: " << endl;
//         for (int i = 0; i < size; i++)
//         {
//             cout << "a[" << i << "] = ";
//             cin >> a[i];
//             //cout << endl;
//     }
//     }
//     int num, pos;

//     cout << "Enter the number to be inserted: ";
//     cin >> num;
//     cout << endl;

//     cout << "Enter the position at which " << num << " is to be inserted : " ;
//     cin >> pos;
//     cout << endl;

//     if(pos <= 0 || pos > size+1 ){
//         cout << "Invalid Position!";
//     }

//     else{
//     //shifting to make way for new element 

//     for(int i = size-1; i >= pos ; i--){//started shifting elements from (size - 1) i.e. index of last element
//         a[i]=a[i-1];//shifting the element from its index to its next index
//     }
//     a[pos - 1] = num; //insertion of num
//     size++;//increasing/updating the size of array 
//     }

//     //printing the updated array
//     for(int i= 0 ; i < size; i++)
//     {
//         cout << "a[" << i << "] = " << a[i] << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    const int max_size = 50;
    int a[max_size];
    int size;

    cout << "Enter the size of array: ";
    cin >> size;
    cout << endl;

    if (size <= 0 || size > max_size)
    {
        cout << "Invalid array size!" << endl;
        return 1; // Exit with an error code
    }

    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int num, pos;

    cout << "Enter the number to be inserted: ";
    cin >> num;
    cout << "Enter the position at which " << num << " is to be inserted: ";
    cin >> pos;

    if (pos <= 0 || pos > size + 1)
    {
        cout << "Invalid Position!" << endl;
    }
    else
    {
        if (size >= max_size)
        {
            cout << "Array is already full!" << endl;
        }
        else
        {   //this algorithm is necessary when the array is sorted, hence order is fixed and thus no changes can be made in position of number
        //time complexity becomes theta(n)[worst case, where n is the size of array],
        //theta(1) [best case, when element is inserted at last of array, no shifting required] or 
        //theta(n-p)[average case, where n is size of array and p is postion at which element needs to be inserted]
            // Shift elements to make room for the new element
            for (int i = size ; i >= pos; i--) // i = size as element at size -1 was being overwritten before it was shifted, thus it becomes garbage.  
            {
                a[i] = a[i - 1];
            }
            a[pos - 1] = num; // Insert the new number
            size++;           // Increase the size of the array

            //following is done when no sorting or order is necessary for the array.
            // a[size] = a[pos-1];
            // a[pos -1]=  num;
            // size++;
        }
    }

    // Printing the updated array
    cout << "Updated array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    return 0;
}
