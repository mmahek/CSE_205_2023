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
    }
};

void insertAtTail( Node *&tail, int val ){
    Node *n = new Node(val);
    if ( tail == NULL){
        tail = n;
    }
    else{
        tail->next = n;
        tail = tail->next;
    }  
    
} 

void insertAtHead( Node *&head, int val ){
    Node *n = new Node(val);
    n -> next = head;
    head = n;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int val){
    if (position == 1){
        insertAtHead(head, val);
        return;
        }
    Node *temp = head;
    int count = 1;
    while( count < position - 1){
        temp = temp -> next;
        count++;
        }
        
    if(temp -> next == NULL){
        insertAtTail(tail, val);
        }
    
    else{
        Node *nodeToInsert = new Node(val);
        nodeToInsert -> next = temp -> next;//connection
        temp -> next = nodeToInsert;//insertion
        if(temp == tail){
            tail = nodeToInsert;
        }
    }
}

void deleteNode(Node *&head, int position){
    if( position == 1){
        Node *temp = head;
        head = head -> next;
        delete temp;
    }
    else{
        Node *current ;
        Node *prev;
        int count = 1;
        while( count < position){
            prev -> next = current;
            current = current -> next;
            count++;
        }
        prev -> next = current -> next;
        current -> next = NULL;
        delete current;

    }
}


void displayInfo(Node *head){
    Node *temp = head;
    while( temp!= NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    //cout << endl;
}


int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 5);
    insertAtHead(head, 24);
    insertAtHead(head, 12);
    insertAtTail(tail, 8);
    insertAtTail(tail, 99);

    insertAtPosition(head, tail, 5, 9);
    
    //displayInfo(head);
    cout << endl;

    deleteNode(head, 5);
    displayInfo(head);
    return 0;
}
