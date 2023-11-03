#include<iostream>
#include<queue>
using namespace std;

class node{
    public:

    int data;
    node* left;
    node* right;

    //constructor (by default: if not stated then this)
    node(int d){
        this -> data = d;            
        this -> right = NULL;       
        this -> left = NULL;          
    }
};
node* buildTree(node* root){
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);//creating new node and passing the value at creation
    if(data == -1){
        return NULL;//when user inputs value -1, return NULL        
    }

    cout << "Enter data for left of " << data << endl;
    //recursive call for left
    root-> left = buildTree(root->left);

    cout << "Enter data for right of " << data << endl;
    // recursive call for right
    root -> right = buildTree(root->right);
    return root;
}
/*void levelOrderTravelsal(node* root){
    queue<node*> q; //creation of node* type queue
    q.push(root);//root completed
    q.push(NULL);

    while(!q.empty()){//jab tak queue empty nahi hota hai
    node* temp = q.front();//temp takes the front of queue
    
        q.pop();//keeep poping

        if(temp = NULL){
            //purana level complete traverse ho chuaka hai
            cout << endl;
            if(!q.empty()){//queue still has child nodes
                q.push(NULL);
            }
        }
        
        else{
            cout << temp->data << " ";
            if (temp->left){                       // if front has non null left child
                q.push(temp->left); // push left child into queue
            }
            if (temp->right){ // same with right
                q.push(temp->right);
            }
        }        
    }
 }
*/
 void levelOrderTraversal(node *root)
 {
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();//temp stores the front
        q.pop();//front element is deleted or removed from queue and STL shifts front ptr to next element

        if (temp == NULL){//when there is no element availaible in queue
            // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty()){//this level is over but queue still has some child ndoes
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
 }

int main(){
    node *root = NULL;

    //creating a tree
    root = buildTree(root);

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout << "Printing the tree vis level order traversal : " << endl;
    levelOrderTraversal(root);
    return 0;
}