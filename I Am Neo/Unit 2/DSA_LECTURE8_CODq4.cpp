#include <iostream>

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

    void append(int value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
            return;
        }
        Node *current = head;
        while (current->next)
        {
            current = current->next;
        }
        current->next = newNode;
    }

    void display()
    {
        Node *current = head;
        while (current)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main()
{
    LinkedList ll;
    int n, value, new_value;

    // Input number of nodes
    std::cin >> n;

    // Input values and insert at the beginning
    for (int i = 0; i < n; i++)
    {
        std::cin >> value;
        ll.insertAtBeginning(value);
    }

    // Input the value to append
    std::cin >> new_value;

    // Print the initial and final linked lists
    std::cout << "Created Linked list: ";
    ll.display(); // Include all values in the initial display
    std::cout << "Final list: ";
    ll.append(new_value); // Append the new value
    ll.display();         // Display the final list

    return 0;
}
