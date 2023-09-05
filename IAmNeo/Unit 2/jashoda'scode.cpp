#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void display()
    {
        Node *current = head;
        while (current)
        {
            cout << current->data << " ";
            current = current->next;
        }
    }

    void insertNodes()
    {
        int choice;
        while (true)
        {
            cin >> choice;
            if (choice == 0)
            {
                break;
            }
            insertAtBeginning(choice);
            cout << "Node inserted" << endl;
        }

        cout << "Linked List: ";
        display();
        cout << "\nNode ended" << endl;
    }
};

int main()
{
    LinkedList ll;
    ll.insertNodes();
    return 0;
}
