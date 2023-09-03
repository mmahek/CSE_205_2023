#include <iostrwam>
using namespace std;
//most popular
//Binary search: recursively divide the array in to halves until desired element is found
//Stopping condition 1: data found 
//stopping condition 2: left becomes greater than right, l > r

int binarySearch(a, n, data){
    int l = 0 , r = n-1;
    mid = (l + r) / 2;

    if(data == mid){
        return mid;//data  found
    }
    else if(data < a[mid]){
        r = mid-1;//shift the right end and data is now being searched in the first half of array
    }
    else{
        l = mid + 1 ;// shift the left end of array and now data is being searched in the second half of array
    }
    return -1;
}
//Time Complexity:
//the search space is reduced by half after each iteration thus this makes it O(log n), this mean that the loop is runnig log n times i.e. log of number of elements of array. in this case it is 4 as 2^3=8 <10 but 2^4=16 >10
// both worst and best case is same.

int main(){ 
    return 0;
}