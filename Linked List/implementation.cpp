#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};
void insertAtHead(Node *&head, int val);
void insertAtTail(Node *&tail, int val);

void insertAtPosition(Node *&head, Node *&tail, int position, int val)
{

    // edge case when insertion is needed at 1st position
    if (position == 1)
    {
        insertAtHead(head, 100);
        return;
    }

    Node *temp = head; // specifies head, (head ko darsha raha hai)
    int count = 1;     //It is initializes to keep track of the current position in the list.
    // definately at first node, head is at node 1
    // if the control is at first and need to go to position, then traversal is required till (n-1)th position thus loop
    while (count < position - 1)
    {
        temp = temp->next; // temp is pointer to access, move temp pointer to next node in list
        count++;           // control reaches to the position (n-1)th position
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, val);
    }
    // creating a node for val
    Node *nodeToInsert = new Node(val); // created in heap , when deleted, need to be done by destructor

    //Insert the new node at specified position
    nodeToInsert->next = temp->next; // Set the next pointer of the new node to the node at the current position
    temp->next = nodeToInsert;       // Set the next pointer of the (position - 1)th node to the new node

    //handle tail pointer
    if(temp == tail){
        tail = nodeToInsert;//update tail pointer to the newly inserted node
    }
}
void insertAtTail(Node *&tail, int val)
{
    Node *n = new Node(val); // new node n created
    tail->next = n;          // tail is updated and now points to last element ensuring newly created element remains connected to the existing list
    tail = tail->next;       // tail pointer is updated to the node at which current node's pointer is pointing at
}

void insertAtHead(Node *&head, int val)
{                            // reference is used to ensure that the changes are made into the existing linked list
    Node *n = new Node(val); // new node created named n
    n->next = head;          // head is updated and points add first element of linked list and this LOC ensures that newly created node is connected to the existing list
    // next of n points to head

    // connection is made by pointing the pointer of new node to the address of existing node
    head = n; // this LOC is crucial as the head pointer  now points to the first node
}

void print(Node *&head)
{ // no changes made to head
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void deleteNode(int position, Node *&head)
{
    // provide position and the value at it will be delete
    if (position == 1)
    {
        // CASE 1: First node
        Node *temp = head;
        head = head->next; // move head to next position
        // memory free start node
        temp->next = NULL; // before deletion, set pointer of to be deleted node to null
        delete temp;//delete node
    }
    else
    {
        // CASE 2: middle node
        Node *current = head;
        Node *prev = NULL;

        int count = 1;
        while (count < position)
        {
            prev = current;
            current = current->next;
            count++;
        }
        //update the nodes to bypass the deleted node
        prev->next = current->next; // changing the pointer of prev node to next node's address
        current->next = NULL;       // before deletion, set pointer of to be deleted node to null
        delete current;
        // CASE 3: Last node
    }
}

int main()
{
    Node *node1 = new Node(10); // new node, node1 is created dynamically using "new" keyword
    // constructor is called with the argument 10, data of new node, node1's data is set to 10
    //  cout << node1 -> data << endl;
    //  cout << node1 -> next << endl;//it prints 0 as a representation of NULL i.e. memory address not the actucal value

    Node *head = node1; // is essential for maintaining a reference to the first node of the linked list.

    Node *tail = node1; // maintains reference to tail of the list
    print(head);

    insertAtHead(head, 12);
    insertAtHead(head, 16);

    insertAtTail(tail, 24);
    print(head);
    insertAtPosition(head, tail, 4, 100);
    print(head);

    cout << "Head : " << head->data << endl; // print the data of head
    cout << "Tail : " << tail->data << endl; // print the data of tail
    deleteNode(5, head);
    print(head);
    cout << "Head : " << head->data << endl; // print the data of head
    cout << "Tail : " << tail->data << endl; // print the data of tail
    return 0;
}