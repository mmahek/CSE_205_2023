// There is a lot to learn, Keep in mind “ Mnn bhot karega k chor yrr apne se nahi hoga ya maza nahi aara, Just ask 1 question “ Why I started ? “

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free!";
    }
};

insertAtNode(Node *&tail, int element, int val)
{
    // Assuming that the eleemnt is present in the list

    // Empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(val);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non - empty list
        Node *current = tail; // creating pointer current to traverse through the list
        while (current->data != element)
        {                            // iterating till reach the desired node after which new node is to be inserted
            current = current->next; // shift
        }

        // element found, current is representing the element wala node
        Node *newNode = new Node(val); // new node created
        current->next = newNode->next;
        current->next = newNode; // join the new node to existing node
    }
}
/*void print(Node* tail){
    Node* temp = tail;//temporary pointer for traversal
    cout << tail -> data << " ";
    while(tail -> next != temp){//till same data is reached, keep printing
        cout << tail -> data << " ";//print the data stored into the tail pointer
        tail = tail -> next;//shift the tail
    }
    cout << " ";
}*/

void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;

    insertAtNode(tail, 5, 7);
    insertAtNode(tail, 5, 3);
    print(tail);

    insertAtNode(tail, 3, 5);
    print(tail);

    insertAtNode(tail, 5, 7);
    print(tail);

    return 0;
}