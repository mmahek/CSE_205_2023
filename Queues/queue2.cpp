// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// // take out elements from the queue 1 by 1 and put them in stack
// // take out elements from the stack 1 by 1 and put them in queue
// queue<int> rev(queue<int> q){
//     stack<int> s;

//     while(!q.empty()){
//         int element = q.front();
//         q.pop();
//         s.push(element);
//     }
//     while(!s.empty()){
//         int element = s.top();
//         s.pop();
//         q.push(element);
//     }

//     return q;
// }

// queue<int> kRev(queue<int> q, int k){
//     stack<int> s;

//     for(int i = 0 l i < k; i++){
//         int element = q.front();
//         q.pop();
//         s.push(element);
//     }
// }
// int main(){

// }
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int setup()
{
    try
    {
        // Read input from the user
        std::string user_input;
        std::getline(std::cin, user_input);

        // Split the input into integer, float, and string parts
        int integer_part;
        float float_part;
        std::string string_part;

        std::stringstream ss(user_input);
        ss >> integer_part >> float_part;
        ss.ignore(); // Ignore the space between float and string
        std::getline(ss, string_part);

        // Open the file for writing
        std::ofstream file("test.txt");
        if (!file.is_open())
        {
            std::cout << "Cannot open file." << std::endl;
            return 1;
        }

        // Write data to the file
        file << integer_part << " " << float_part << std::endl;
        file << string_part << std::endl;

        // Close the file
        file.close();

        return 0;
    }
    catch (...)
    {
        std::cout << "Unable to setup." << std::endl;
        return 1;
    }
}

int main()
{
    if (setup() == 0)
    {
        // Open the file for reading
        std::ifstream file("test.txt");
        if (!file.is_open())
        {
            std::cout << "Cannot open file." << std::endl;
            return 1;
        }

        // Read and print data from the file
        int integer_part;
        float float_part;
        std::string string_part;

        file >> integer_part >> float_part;
        file.ignore(); // Ignore the newline character
        std::getline(file, string_part);

        // Calculate the sum of the integer and float values
        float sum = static_cast<float>(integer_part) + float_part;

        // Print the values
        std::cout << integer_part << " " << float_part << std::endl;
        std::cout << string_part << std::endl;
        std::cout << "Sum of integer and float: " << sum << std::endl;

        // Close the file
        file.close();
    }

    return 0;
}
