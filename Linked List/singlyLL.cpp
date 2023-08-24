    #include <iostream>
    using namespace std;

    class Node
    {
    public:
        int data;
        Node *next; // this pointer will point to next node

        Node(int val)
        { // constructor method, named same as class. no return type0
            data = val;
            next = NULL;
        }
    };

    void check(Node* &head, int what){
        Node* temp = head;
        // cout << "what :" ;
        // cin >> what;
        while(temp!= NULL){
            if (temp->data == what ){
                cout << "True" << endl;
            }
            temp = temp->next;
        }
    }

    void insertAtTail(Node *&head, int val)
    { // created a pointer variable and passed the value by reference because we want to make changes to the original linked list
        Node *n = new Node(val);
        if (head == NULL)
        {
            head = n;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        { //-> arrow operator
            temp = temp->next;
        }
        temp->next = n;
    }

    void insertAtHead(Node *&head, int val)
    {
        Node *n = new Node(val);
        n->next = head;
        head = n;
    }

    void display(Node *head)
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
    }
    int main()
    {
        Node *head = NULL; // empty linked list created
        // head never moves or changes
        // instead create a new pointer temp pointing to head and change it till it reaches the last pointer. Keep iterating temp to reach the last
        //  insertAtTail(head, 2);//new node has been created in memory
        insertAtTail(head, 1);
        insertAtTail(head, 2);
        insertAtHead(head, 10);
        display(head);
        check(head, 2);
    }