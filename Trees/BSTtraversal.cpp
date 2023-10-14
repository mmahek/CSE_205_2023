#include<iostream>
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
// int countNodes(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     return 1 + countNodes(root->left) + countNodes(root->right);
// }
int countNodes(Node *root)
{
    if (root == NULL){
        return 0;
    }
    // return 1 + countNodes(root->left) + countNodes(root->right);

    int count = 1;

    //Left Sub-Tree
    if (root->left != NULL){
        count = count + countNodes(root->left);
    }

    //Right Sub-Tree
    if (root->right != NULL){
        count = count + countNodes(root->right);
    }
    return count;
}

Node* searchInBST(Node* root, int key){
    if(root == NULL) return;

    if(root->data == key ) return root;

    if(root->data > key ){
        return searchInBST(root->left, key);
    }

    return searchInBST(root->right, key);

    }


Node* inOrderSucc(Node* root){
    Node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

/*
case 1 : node is a leaf

case 2 : node has one child

case 3 : node has two children
        do the inorder traversal, whatever comes after the target node, replace the element with it
*/

Node* deleteInBST(Node* root, int key){
    if(key < root->data ){
        root->left = deleteInBST(root->left, key);
    }
    else if(key > root->data){
        root->right = deleteInBST(root->right, key);
    }
    //responsible for case 1 and 2
    else{

        if(root->left == NULL){//replace it with right wala
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){// replace it with left wala
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //case 3
        Node* temp = inOrderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->key);
    }//till here
        return root;
}


int main (){
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);

    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    if(searchInBST(root, 15) == NULL){
        cout << "Key does exists!" << endl;
    }
    else{
        cout << "Key doesn't exists.";
    }

}
