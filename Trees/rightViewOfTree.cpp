#include<iostream>
#include<queue>
using namespace std;


class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void rightView(Node* root){
    if(root =  NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
            //print the last eleemnt of each level
            int n = q.size();//n will be index or total number of elements in queue
            for(int i = 0 ; i < n; i++){
                Node* curr = q.front();
                q.pop();

                if(i == n-1){//iterating till last data of queue
                    cout << curr->data << " ";
                }

                if(curr->left != NULL){
                    q.push(curr->left);
                }

                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
    }
}
int main(){
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);

    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    rightView(root);
}

/*

left view of binary tree*/