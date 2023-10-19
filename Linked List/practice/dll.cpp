#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //contructor
    Node(int val){
        this -> data = val;
        this -> next = NULL;
        this -> prev = NULL;
    }

    //destructor
    ~Node(){
        int val = this -> data;
        if( next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory free for Node with Data" << endl;
    }
};

void print(Node* head){
    Node* temp = head;
    int length = 0;

    while(temp != NULL){
        cout << temp -> data << "  ";
        length = length + 1;
        temp = temp -> next;
    }
    
    cout << "\nLenght :" << length;
   cout << endl;
    cout << endl;
}

void insertAtHead(Node* &head, Node* &tail, int val){

    if(head == NULL){
        //empty list
        Node* n = new Node(val);
        head = n;
        tail = n;
    }
    else{
        Node *n = new Node(val);
        n->next = head;
        head->prev = n;
        head = n;
    }
}

void insertAtTail(Node* &head, Node* &tail, int val){
    if(tail == NULL){
        Node* n = new Node(val);
        tail = n;
        head = n;
    }
    else{
        Node *n = new Node(val);
        tail->next = n;
        n->prev = tail;
        tail = n;
    }

}

void insertAtPosition(Node *&head, Node *&tail,  int position, int val){
    //insert at satrt
    if(position == 1){
        insertAtHead(head, tail, val);
        return;
    }
    Node* n = head;
    int count = 1; //keeps track of position
    while(count < position - 1){
        n = n -> next;
        count++;
    }
    //insertion at last position
    if(n -> next == NULL){
        insertAtTail(head, tail, val);
        return;
    }
    //insert at position, create and insert
    Node* nodeToInsert = new Node(val);
    nodeToInsert -> next = n -> next;
    n -> next -> prev = nodeToInsert;
    n -> next = nodeToInsert;
    nodeToInsert -> prev = n;
}
void deletion(Node* &head, Node* &tail, int position){
    if( position == 1){
        Node* n = head;
        n->next->prev = NULL;
        head = n->next;
        n->next = NULL;
        delete n;
    }
    else{
        // delete from middle
        Node* current = head;
        Node* prev = NULL;

        int count = 1;
        while( count < position ){
                prev = current;
                current = current -> next;
                count++;
        }
       
        current -> prev = NULL;
        prev -> next = current -> next ;
        current -> next = NULL;
        delete current;

        // Check for the special case of deleting the tail node.
        if (position == tail->data)
        {
                tail = tail->prev;
                tail->next = nullptr;
                return;
        }
    }
    
}
int main(){
    Node* node1 = new Node(10);//first node
    /*Node* head = node1;
    Node* tail = node1;*/

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 24);
    print(head);

    insertAtTail(head, tail, 25);
    print(head);

    insertAtPosition(head, tail, 3, 100);
    print(head);

    insertAtPosition(head, tail, 1, 101);
    print(head);

    insertAtPosition(head, tail, 5, 102);
    print(head);
    
    deletion(head, tail, 5);
    print(head);

    cout << head -> data << endl ;
    cout << tail -> data << endl ;
    return 0;
}