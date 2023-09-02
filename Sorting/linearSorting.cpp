// #include <iostream>
// using namespace std;

// // void linearSearch(int arr[], int size, int data){
// //     int found = 0;//method 2
// //     for (int i = 0 ; i < 10 ; i++){
// //         if(a[i] == data){
// //             cout << "Element found at " << i << " index." << endl;
// //             found = 1; //method 2
// //             break; //Stopping Condition 1
// //             //this ensured that loop doesnot traverse further in the array to search for the data, once found. Break keyword will take program prompt directly out of the for loop and loop ends.
// //         }
// //         // Method 1
// //         /*if( i == n){
// //             cout << "Element not found." << endl; //Stopping condition 2
// //             //loop traverses through the whole array and doesnot find the data thus data is not present in the array i.e. not found.
// //         }*/
// //         // Method 2
// //         // found will remain = 0 until the if condition after for loop becomes false. The control will never enter it thus found never becomes 1 and hence this method is better than the previous.
// //         if( found == 0){
// //             cout << "Element not found" << endl;
// //         }
// //     }
// // }

// int main(){
//     public:

//     int data, 
//     int arr[10];
//     arr[10] = { 1, 3, 4, 67, 89, 34, 56, 22, 90, 0};
//     // cout << " Enter the data: " ;
//     // cin >> data ;
//     // cout << endl;
//     int found = 0; // method 2
//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i] == data)
//         {
//             cout << "Element found at " << i << " index." << endl;
//             found = 1; // method 2
//             break;     // Stopping Condition 1
//             // this ensured that loop doesnot traverse further in the array to search for the data, once found. Break keyword will take program prompt directly out of the for loop and loop ends.
//         }
//         // Method 1
//         /*if( i == n){
//             cout << "Element not found." << endl; //Stopping condition 2
//             //loop traverses through the whole array and doesnot find the data thus data is not present in the array i.e. not found.
//         }*/
//         // Method 2
//         // found will remain = 0 until the if condition after for loop becomes false. The control will never enter it thus found never becomes 1 and hence this method is better than the previous.
//         if (found == 0)
//         {
//             cout << "Element not found" << endl;
//         }
//     }
//     // int el = linearSearch(a, 10, 22);
//     // cout << el;

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int a[10], m = 5,  data;
    
    // array1
    cout << "Enter the elements for Array 1: " << endl;
    for (int i = 0; i < m; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        cout << endl;
    }
    cout << "Array 1:" << endl;
    for (int j = 0; j < m; j++)
    {
        cout << "a[" << j << "] = " << a[j] << endl;
    }
    cout << endl;
    cout << endl;
    cout << " Enter the data: ";
    cin >> data;
    cout << endl;

    int found = 0;
    for (int i = 0; i < m; i++)
        {
            if (a[i] == data)
            {
                cout << "Element found at " << i << " index." << endl;
                found = 1; // method 2
                break;
            }
            
        }
        if (found == 0)
        {
            cout << "Element not found" << endl;
        }
} 
//Time complexity
//Best case: 1 comparision matches the found, O(1)
//worst case: O(n)
// average case: (sum of all cases)/(no of cases) = (1+2+3...+n)/n = n(n+1)/2*n = O(n) = (n+1)/2