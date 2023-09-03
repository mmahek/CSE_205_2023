#include <iostream>
using namespace std;
//Loop  1 will traverse the array from index 1 to end : increment 
void insertionSort(int a[], int size){
    for(int i = 1; i < size -1; i++){
        // Step 1: store the i=1 st element in temp and
        int temp = a[i];//this 
        // Step 2: then comparision s made, the i th element is compared to its adajacent element i.e. (i-1)th element thus j=i-1
        int j = i - 1;
        // Step 3: This loop decrement and compares the value stored in temp with every element of array 
        while(j >= 0 && a[j]>temp){//starting from the start of array AND whenver element of array is greater than temp's value
        // Step 4: shift the jth element to (j+1) st place by overwriting to create hole
        a[j+1]=a[j];
        // Step 5: Traverse the array from last to start (index 0) moving onbe by one
            j--;
        }
        // Step 6: store the value of temp at hole i.e. insert it.
        a[j+1] = temp;
    }
}
// Time complexity: 
//Best case: when the array is already sorted O(n)
//worst case: when the array is in decending order O(n) as for loop checks with one element and realizes tht the leement is at its coorect place thus no use of while loop

int main () {

    return 0;
}