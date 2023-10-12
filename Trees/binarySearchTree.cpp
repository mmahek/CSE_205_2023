#include<iostream>
using namespace std;

/*
    RULE 1
    -   The left subtree of a node contains only nodes with keys less than the node's key.
    
    RULE 2
    -   The right subtree of a node contains only nodes with keys greater than the node's key.

    RULE 3
    -   The left and right subtree must also be a binary search tree. There must be no duplicate.
    */

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

   Node* insertBST(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    else if(val < root->data){//
        root->left = insertBST(root->left, val);//updating left subtree with the new node
    }
    else{
        root->right = insertBST( root->right, val);
    }

   }

void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main(){
    Node* root = NULL;

    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    //insertBST(root, 9);

    inOrder(root);
    return 0;
    }
    