#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next; // this pointer will point to next node

    Node(int val)
    { // constructor method, named same as class. no return type0
        data = val;
        next = NULL;
    }
};
void deleteLL(Node *&head, int val)
{                      // remove the node
    Node *temp = head; // creating a temp pointer as we donot need head to traverse
    if (head == NULL)
    {           // edge case: no node is present further thus pointer points to NULL. hence no need to do anything thus return.
        return; // the code will not move forward
    }
    while (temp->next != NULL && temp->next->data == val)
    { // till data of next of temp is not equal to desired value
        temp = temp->next;
    }
    Node *toDelete = temp->next;   // storing the value of data of node just before the desired value in a variable
    temp->next = temp->next->next; // making connection among the node before and after the node to be deleted so that the link is not lost
    delete toDelete;               // deleting the value stored in pointer as required
}

void insertAtTail(Node *&head, int val)
{ // created a pointer variable and passed the value by reference because we want to make changes to the original linked list
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;//iterate temp to find the desired node
    while (temp->next != NULL)
    { // -> arrow operator
        temp = temp->next;
    }
    temp->next = n; // n is new node
}

void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head; // connection is made by pointing the
    head = n;
}
void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp != head)
        {cout << "->";}
        cout << temp->data;
        temp = temp->next;
    }
}

// void display(Node *head)
// {
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
// }

void deletionAtHead(Node* &head, int val){
    //Node *temp = head;
    Node *toDelete = head;//storing the value of head in another variable so that i can deletee it later after shift
    head= head->next;//shifting the head to its next value
    delete toDelete;//deleting the value as required

}

void check(Node *&head, int what)
{
    Node *temp = head; // pointer in memory for changing its value and traversing through the linked list
    // cout << "what :" ;
    // cin >> what;
    while (temp != NULL)
    {
        if (temp->data == what) // data of node
        {
            cout << "True" << endl;
        }
        temp = temp->next; // otherwise, go to next node
    }
}

int main()
{
    Node *head = NULL; // empty linked list created
    // head never moves or changes
    // instead create a new pointer temp pointing to head and change it till it reaches the last pointer. Keep iterating temp to reach the last
    //  insertAtTail(head, 2);//new node has been created in memory
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtHead(head, 6);
    insertAtTail(head, 9);

    display(head);

    cout << endl;

    check(head, 2);

    deleteLL(head, 3);

    display(head);

    cout<< endl;
    
    deletionAtHead(head, 6);
    display(head);
    
}
//if head is deleted, whole linked list will be lost