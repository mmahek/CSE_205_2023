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

    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display()
    {
        if (head == nullptr)
        {
            std::cout << "Linked List is empty." << std::endl;
            return;
        }
        std::cout << "Linked List: ";
        Node *current = head;
        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main()
{
    LinkedList linkedList;
    int data;

    while (true)
    {
        std::cin >> data;
        if (data < 0)
        {
            break;
        }
        linkedList.insertAtEnd(data);
    }

    linkedList.display();

    return 0;
}
