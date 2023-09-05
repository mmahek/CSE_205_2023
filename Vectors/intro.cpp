#include <iostream>
#include <vector>
using namespace std;

// Vectors are used to store elements of similar data type.
// Unlike array, the size of a vector can grow dynamically
int main(){
    vector<int> vector1 = {1, 2, 3, 4, 5}; //vector of type integer which accepts as many inputs given , dynamic whereas arrays were static, once declared cannot be increased or decreased
    cout << "Original Vector : " ;
    for(auto i : vector1){// auto keyword will adjust to the type
    // char used in here will print different emojis
        cout << i << " ";
    }
    cout << endl;
    //Add elements in vector
    vector1.push_back(6); //push_back() adss element at the end
    vector1.push_back(24);

    cout << "Element at 1 is " << vector1.at(1) << endl;// outputs the element at given index

    vector1.at(1) = 22;// changes the value of element at given index
    
    cout << "Vector before deletion : ";
    for (auto i : vector1)
    { // auto keyword will adjust to the type
        // char used in here will print different emojis
        cout << i << " ";
    }
    cout << endl;
    // Deleting element present at the last index
    vector1.pop_back();
    cout << "Updated Vector : ";
    for (auto i : vector1)
    {   // auto keyword will adjust to the type
        // char used in here will print different emojis
        cout << i << " ";
    }
    return 0;
}
//cppreference.com
//cplusplus.com