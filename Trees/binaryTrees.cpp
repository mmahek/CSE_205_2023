#include<iostream>
using namespace std;

class Node{
    public:
    //data field, left pointer, right pointer
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void postOrder(Node *root)
{ // left  root  right
    if (root == NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
}

void inOrder(Node* root){// left  root  right
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->data << " ";   
    inOrder(root->right);
}

//Preorder Traversal
void preOrder(Node* root){// Root  left  right
    //base case: reached the end of branch
    if(root == NULL) return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    Node* root = new Node(1);//root node created, first circle, currently, left and right pointer of this node points to NULL
    root -> left = new Node(2);//new node has been created to the left of root node 
    root -> right = new Node(3);
    root -> left -> left = new Node(4);//right to the left of root
    root -> left -> right = new Node(5);

    root -> right -> left = new Node(6);//child of node 3 at left
    root -> right -> right = new Node(7);// child of node 3 at right

    //traversal of tree
    cout << "The traversal of tree by PreOrder: ";
    preOrder(root);

    cout << endl;

    cout << "The traversal of tree by InOrder: ";
    inOrder(root);

    cout << endl;

    cout << "The traversal of tree by PostOrder: ";
    postOrder(root);
    return 0;
}