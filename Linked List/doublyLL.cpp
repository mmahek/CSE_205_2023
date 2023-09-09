// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next; // pointer of type node
//     Node *prev;

//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//         prev = NULL;
//     }
// };

// void insertAtHead(Node *&head, int val)
// {

//     Node *n = new Node(val);
//     n->next = head;

//     if (head != NULL)
//     {
//         head->prev = n;
//     }
//     head->prev = n;
// }
// void insertionAtTail(Node *&head, int val)
// {
//     Node *n = new Node(val); // new node created
//     if (head == NULL)
//     { // deals with edge case
//         insertAtHead(head, val);
//         return;
//     }

//     Node *temp = head;
//     while (temp->next != NULL) //
//     {                          //-> arrow operator
//         temp = temp->next;
//     }
//     temp->next = n; // n is new node
//     n->prev = temp; // linking the previous
// }

// void display(Node *head)
// {
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;

//     }
// }
// int main()
// {
//     Node *head = NULL;
//     insertionAtTail(head, 24);
//     insertionAtTail(head, 2);
//     display(head);
// }
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;

    if (head != NULL)
    {
        head->prev = n;
    }

    head = n; // Update head to point to the new node
}

void insertionAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
// deletion operation in doubly linked list

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != NULL)
            cout << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    insertionAtTail(head, 24);
    insertionAtTail(head, 2);
    insertionAtTail(head, 7);
    insertionAtTail(head, 6);
    insertionAtTail(head, 29);
    display(head);

    return 0;
}
