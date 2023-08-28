#include <iostream>
using namespace std;
int main(){
    int a[50], size, pos, item;
    cout << "Enter the size of array: " ;
    cin >> size;
    cout << endl;

    cout << "Enter the elements of array: " << endl;
    for(int i = 0 ; i < size ; i ++){
        cout << "a[" << i << "] = " ;
        cin >> a[i];
        cout << endl; 
    }

    cout << "Enter the position whose element needs to be deleted: ";
    cin >> pos;
    //validating the position entered
    if(pos < 1 || pos > size){
        cout << "Invalid position!";
    }
    //shorter way to delete the element and just swapping the last element to the deleted element's place and decreasing the size of array to decrease the time complexity of program
    else{
        item = a[pos-1];
        a[ pos - 1] = a[size-1];
        size--;
    }
    // else{//deletion
    // item = a[pos-1];
    // for(int i = pos -1 ; i < size - 1 ; i++)//pos is size+1 or index+1. this loop is starting from pos-1 i.e the index of elemenrt deleted as pos is size+1 and when element is deleted, the size of array decreases by 1 thus loop ends at size -1 
    //     a[i] = a[i+1];
    // }
    // size--;//size of array decreases

//time complexity depends upon the position of element to be deleted
//best case = theta(1)
//worst case = theta(n) where n is the total size of array
//print the updated array

for(int i=0; i < size; i++){
    cout << "a[" << i << "] = " << a[i] << endl;
}

cout << "Deleted element is " << item ;
    return 0;
}