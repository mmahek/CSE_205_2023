#include<iostream>
#include<queue>
using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void printLevelOrder(Node* root){

    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* node = q.front();
        q.pop();

        if(node != NULL){
            cout << node->data << " ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}


int main(){
    Node *root = new Node(1); // root node created, first circle, currently, left and right pointer of this node points to NULL
    root->left = new Node(2); // new node has been created to the left of root node
    root->right = new Node(3);
    root->left->left = new Node(4); // right to the left of root
    root->left->right = new Node(5);

    root->right->left = new Node(6);  // child of node 3 at left
    root->right->right = new Node(7); // child of node 3 at right


    printLevelOrder(root);
    return 0;
}
/*
just like for binary search, array must be sorted i.e. it is a rule, binary search tree also needs to follow certain rules*/