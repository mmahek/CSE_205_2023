#include <iostream>
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
