// #include <iostream>
// #include <stack>
// #include <string>
// #include <sstream> // Include the <sstream> header for std::stringstream

// using namespace std;

// string reverseSentence(const string &sentence)
// {
//     stack<string> wordStack;
//     string word;
//     stringstream sentenceStream(sentence);

//     // Split the sentence into words and push them onto the stack
//     while (sentenceStream >> word)
//     {
//         wordStack.push(word);
//     }

//     // Pop words from the stack to reconstruct the reversed sentence
//     string reversedSentence;
//     while (!wordStack.empty())
//     {
//         reversedSentence += wordStack.top() + " ";
//         wordStack.pop();
//     }

//     // Remove trailing space
//     if (!reversedSentence.empty())
//     {
//         reversedSentence.pop_back();
//     }

//     return reversedSentence;
// }

// int main()
// {
//     string inputSentence = "Hey, how are you?";
//     string reversedResult = reverseSentence(inputSentence);

//     cout << "Original sentence: " << inputSentence << endl;
//     cout << "Reversed sentence: " << reversedResult << endl;

//     return 0;
// }

#include <iostream>
#include <stack>
using namespace std;

void reverseSentence(string s)
{

    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    { // iterate for the entire length
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {                 // encounter the space, i.e the word completes
            word += s[i]; // ad =d the letter to complete the word
            i++;          // increment the i
        }                 // when exiting this loop, 1 complete word has been stored in word and space has been encountered.
        st.push(word);    // push the word into stack
        // every word of sentence is stored into word and then pushed into stack one by one.
        // first word gets stored into the stack at last and further every element is stored above it.
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main()
{
    string s = "Hello, how are you?";
    reverseSentence(s);
}
