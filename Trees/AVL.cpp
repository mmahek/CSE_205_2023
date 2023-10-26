#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *left;
    Node *right;
    int height;
};

Node *newNode(int data){
    Node *node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL : node->height = 1;
    return (node);
}
int height(Node *node){
    if (node == NULL){
        return 0;
    }
    else{
        return node->height;
    }
}

int getBalance(Node *node){
    if (node == NULL){
        return 0;
    }
    else{
        return height(node->left) - height(node->right);
    }
}

Node *insert(Node *node, int data){
    if (node == NULL){
        rerurn(newNode(data));
    }
    if (data < node->data){
        node->left = insert(node->left, data);
    }
    else if (data > node->data){
        node->right = insert(node->right, key);
    }
    else{
        return node;
    }
    // update height
    node->height = max(height(node->left), height(node->right)) + 1;

    // check for balance
    int balance = getBalance(node);

    //LL case
    if (9balance > 1 && data < node -> left)
    {
        /* code */
    }
    
}

int main(){
}