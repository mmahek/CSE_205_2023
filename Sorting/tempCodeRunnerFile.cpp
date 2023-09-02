void linearSearch(int arr[], int size, int data){
//     int found = 0;//method 2
//     for (int i = 0 ; i < 10 ; i++){
//         if(a[i] == data){
//             cout << "Element found at " << i << " index." << endl;
//             found = 1; //method 2
//             break; //Stopping Condition 1
//             //this ensured that loop doesnot traverse further in the array to search for the data, once found. Break keyword will take program prompt directly out of the for loop and loop ends.
//         }
//         // Method 1
//         /*if( i == n){
//             cout << "Element not found." << endl; //Stopping condition 2
//             //loop traverses through the whole array and doesnot find the data thus data is not present in the array i.e. not found.
//         }*/
//         // Method 2
//         // found will remain = 0 until the if condition after for loop becomes false. The control will never enter it thus found never becomes 1 and hence this method is better than the previous.
//         if( found == 0){
//             cout << "Element not found" << endl;
//         }
//     }
// }