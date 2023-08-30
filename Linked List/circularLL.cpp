#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    Node &temp = head;

    while (temp->next != head)
    { // null does not exists
        temp = temp->next;
        
    }
    temp->next = n;
    n->next = head;
}
bool isCircular(Node* head){
    Node* temp = head;
    while(temp != NULL && temp!=head){
        temp = temp->next;
    }
    if(temp=head) return true;
    return false;
}
//insertion at head and deletion
//ambulance
//shooter
//baby driver
int main()
{
    return 0;
}