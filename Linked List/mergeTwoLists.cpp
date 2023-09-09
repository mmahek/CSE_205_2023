/*#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};


ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    ListNode *dummy = new ListNode(0);
    ListNode *current = dummy;

    while (l1 && l2)
    {
        if (l1->val < l2->val)
        {
            current->next = l1;
            l1 = l1->next;
        }


    if (l1)
    {
        current->next = l1;
    }


    return dummy->next;
}
}

void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main()
{

    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(5);
    cout << "List 1: " ;
    printList(l1);

    ListNode *l2 = new ListNode(2);
    l2->next = new ListNode(4);
    l2->next->next = new ListNode(6);
    cout << "List 2: ";
    printList(l2);


    ListNode *mergedList = mergeTwoLists(l1, l2);


    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}
*/
/*
Aniatmaj's
Node* Merge(Node* &head1, Node* &head2){
Node *temp1=head1,*temp2=head2,*head=temp1;
Node* temp;
while(temp1->data > temp2->data){
temp=temp2;
temp2=temp2->next;
temp->next=temp1;
head=temp;
}

while(temp2!=NULL){

if(temp1->next->data > temp2->data){
temp=temp2;

temp2=temp2->next;
temp->next=temp1->next;
temp1->next=temp;

}
else if(temp1->next !=NULL){
temp1=temp1->next;
}
else{
temp1->next=temp2;
return head;
}

}

return head;
}

Tushar's
*/
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

void insertatHead(Node *&head, Node *&tail, int val)
{
    if (head == NULL)
    {
        Node *temp = new Node(val);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
    }
}

void insertatTail(Node *&head, Node *&tail, int val)
{
    if (head == NULL)
    {
        Node *temp = new Node(val);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *newnode = new Node(val);
        temp->next = newnode;
        tail = newnode;
    }
}

int len(Node *&head)
{
    Node *temp = head;
    int ans = 0;
    while (temp != NULL)
    {
        ans++;
        temp = temp->next;
    }
    return ans;
}

// Algorith of Bubble Sort
void sort(Node *&head)
{
    int size = len(head);
    for (int i = 0; i < size; i++)
    {
        Node *curr = head->next;
        Node *prev = head;
        while (curr != NULL)
        {
            if (prev->data > curr->data)
            {
                int temp = prev->data;
                prev->data = curr->data;
                curr->data = temp;
            }
            prev = curr;
            curr = curr->next;
        }
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void merge(Node *&head1, Node *&tail1, Node *&head2, Node *&tail2)
{
    Node *temp = tail1;
    temp->next = head2;
    tail1 = tail2;
}

int main()
{
    cout << "Enter details for List1: -" << endl
         << "Enter the no. of nodes: ";
    int n;
    cin >> n;
    int element;
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter data: ";
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        insertatTail(head, tail, element);
    }
    cout << "Enter details for List2: -" << endl
         << "Enter the no. of nodes: ";
    int n1;
    cin >> n1;
    int element1;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    cout << "Enter data: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> element1;
        insertatTail(head1, tail1, element1);
    }
    merge(head, tail, head1, tail1);
    sort(head);
    cout << "Merged and Sorted Linked List:- " << endl;
    print(head);
    return 0;
}
