#include <iostream>
// #include <
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

    if (head == NULL)
    {
        head = n;
        n->next = head;
        return;
    }

    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

bool isCircular(Node *head)
{
    Node *temp = head;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
        return true;
    return false;
}

Node *floydDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        slow = slow->next;
        // fast = fast -> next -> next;
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){
    if(head== NULL){
        return NULL:
    }
    Node* intersection = floydDetectLoop(Node* head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;

}

int main()
{
    Node *head = NULL;

    // Insert some nodes into the circular linked list
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    // Check if the linked list is circular
    if (isCircular(head))
        cout << "The linked list is circular." << endl;
    else
        cout << "The linked list is not circular." << endl;
    if (floydDetectLoop(head))
    {
        cout << "LOOP" << endl;
    }
    else
    {
        cout << "NO LOOP" << endl;
    }
    return 0;
}
// floyd's cycle detection

// bool detectLoop(Node* head){
//     if(head == NULL)//no node
//     {
//         return false;
//     }

//     map<Node* , bool> visited;
//     Node* temp = head;
//     while(temp != NULL){
//         if(visited[temp] == true){
//             return true;
//         }
//         visited[temp] = true;
//         temp = temp -> next;
//     }
//     return false;
// }
