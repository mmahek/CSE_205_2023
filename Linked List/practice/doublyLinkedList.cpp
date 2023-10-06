#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int val)
    {
        this->data = val;
        this->prev = NULL;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int val = this -> dat;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data " << val << endl;
    }
};

void print(Node *head, Node *tail)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;
    cout << endl;
}

void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        // handle the case when the list is empty
        Node *n = new Node(val);
        head = n;
        tail = n;
    }
    else
    {
        Node *n = new Node(val);
        n->next = head;
        head->prev = n;
        head = n;
    }
}

void insertAtTail(Node *&head, Node *&tail, int val)
{
    if (tail == NULL)
    {
        Node *n = new Node(val);
        tail = n;
        head = n;
    }
    else
    {
        Node *n = new Node(val);
        n->prev = tail;
        tail->next = n;
        tail = n;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int val)
{
    if (position == 1)
    {
        insertAtHead(head, tail, val);
        return;
    }
    int count = 1;
    Node *temp = head;
    while (count < position)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, val);
        return;
    }
    Node *nodeToInsert = new Node(val);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

// gives length
void getLength(Node *head)
{
    int length = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    cout << "Lenght of Linked list is " << length << endl;
    
}

void deleteNode(int position, Node* &head){
    //delete the first node
    if( position == 1){
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;        
    }
    else{
        //delete middle or last node
        
    }
}


int main()
{

    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 1);
    print(head, tail);

    insertAtHead(head, tail, 2);
    print(head, tail);

    insertAtHead(head, head, 3);
    print(head, tail);

    insertAtHead(head, tail, 4);
    print(head, tail);

    insertAtPosition(head, tail, 2, 101);
    print(head, tail);

    getLength(head);  

    return 0;
}
