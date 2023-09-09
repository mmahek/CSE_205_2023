/*Tushar's code
Node* sortList(Node *head){
Node* temp=head;
int ans=0;
while(temp!=NULL){
ans++;
temp=temp->next;
}
int size=ans;
for(int i=0;i<size;i++){
Node* curr=head->next;
Node* prev=head;
while(curr!=NULL){
if(prev->data>curr->data){
int temp1=prev->data;
prev->data=curr->data;
curr->data=temp1;
}
prev=curr;
curr=curr->next;
}
}
}

*/
Node* sortList(Node *head){
    int zeroC = 0;
    int oneC = 0;
    int twoC = 0;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            zeroC++;
        }
        else if(temp->data == 1){
            oneC++;
        }
        else if(temp->data == 2){
            twoC++;
        }

        temp = temp->next;
    }

    temp = head;
    while(temp != NULL){
        if(zeroC != 0){
            temp->data = 0;
            zeroC--;
        }
        else if( oneC != 0){
            temp->data =1;
            oneC--;
        }
        else if(twoC != 0){
            temp->data =1;
            twoC--;
        }

        temp = temp->next;
    }
}
//time complexity is O(n)