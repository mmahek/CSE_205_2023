// There is a lot to learn, Keep in mind “ Mnn bhot karega k chor yrr apne se nahi hoga ya maza nahi aara, Just ask 1 question “ Why I started ? “

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int val){
        this -> data = val;
        this -> next = NULL; 
    }

    //destructor
    ~Node(){
        int val = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory is free!";
    }
};

insertAtNode(Node* &tail, int element, int val){
     //Assuming that the eleemnt is present in the list

     //Empty list
     if( tail == NULL){
        Node* newNode = new Node(val);
        tail = newNode;
        newNode -> next = newNode;
     }
     else{
        //non - empty list
        Node* current = tail;//creating pointer current to traverse through the list
        while(current -> data != element){//iterating till reach the desired node after which new node is to be inserted
            current  = current -> next;//shift
        }

        //element found, current is representing the element wala node
        Node* n = new Node(val);//new node created
        current -> next = n -> next;
        current -> next = n;//join the new node to existing node         
     }
}
/*void print(Node* tail){
    Node* temp = tail;//temporary pointer for traversal
    cout << tail -> data << " ";
    while(tail -> next != temp){//till same data is reached, keep printing
        cout << tail -> data << " ";//print the data stored into the tail pointer
        tail = tail -> next;//shift the tail
    }
    cout << " ";
}*/

void print(Node *&tail)
{
    Node *temp = tail;
    do{   
        cout << tail -> data << " ";
        tail = tail->next;
    }
        while (tail != temp);
        cout << endl;
}
void deleteNode(Node* &tail, int val){
    //empty list
    if(tail == NULL){
        cout << "List is empty" << endl;
        return;
    }
    else{
        //non empty
        //value is present in the ll
        Node* prev = tail;
        Node* current = prev -> next;

        while (current -> data)
        {
            prev = current;
            current = current -> next;
        }
       prev -> next = current -> next;
       if( tail == current){
        tail = prev;
        
       }
       current-> next = NULL;
       delete current; 
    }

}

int main(){
    Node* tail = NULL;

    insertAtNode(tail, 3, 3);
    
    print(tail);

    insertAtNode(tail, 3, 5);
    print(tail); 
    insertAtNode(tail, 5, 7);
    print(tail);

    insertAtNode(tail, 7, 9);
    print(tail);
    insertAtNode(tail, 9, 6);
    print(tail);
    insertAtNode(tail, 6, 10);
    print(tail);
    insertAtNode(tail, 10, 4);
    print(tail);
    deleteNode(tail, 3);
    

    
    print(tail);


        return 0;
}