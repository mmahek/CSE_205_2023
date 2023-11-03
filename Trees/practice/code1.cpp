#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL:
    }
};

void buildTree(node* root){
    cout << "Enter data: " << ;
    int data;
    cin >> data;
    root = new Node(data);
    if( data == -1){
        return NULL;
    }

    //recursive call
    cout << "Enter data for left of " << data << endl;
    root -> left = buildTree(root -> left);

    cout << "Enter thr data for the right of " << data << endl;
    root -> right = buildTree(root -> right);

    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
    }
}
int main(){
    return 0;
}