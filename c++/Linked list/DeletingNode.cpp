#include <bits/stdc++.h>
using namespace std;
class NODE{
    public:
    int data;
    NODE* next;
    NODE(int value){
        data= value;
        next=NULL;
    }
};
int main(){
    NODE*head=NULL;
    NODE*tail=NULL;
    int n;
    cout<<"enter no. of nodes :";
    cin>>n;
    for(int i=0;i<=n;i++){
        int x;
        cout<<"enter "<<i<<" node ";
        cin>>x;
        if(head==NULL){
            head=new NODE(x);
            tail=head;
        }
        else{
            tail->next=new NODE(x);
            tail=tail->next;
        }
    }
    NODE* temp=head;
    
    while(temp->next!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;  
    }
    cout<<temp->data<<endl;


    //DELETING 1ST NODE

    
    // if(head!=NULL){
    //     NODE*temp2=head;
    //     head=head->next;
    //     delete temp2;
    // }
    // cout<<"after deleting first element"<<endl;
    // temp=head;
    // while(temp->next!=NULL){
    //     cout<<temp->data<<endl;
    //     temp=temp->next;  
    // }
    // cout<<temp->data<<endl;


    //deleting last node


    //deleting particular node
    if(head!=NULL){
        NODE* curr=head;
        NODE* pre=NULL;
        while(curr->next->data!=55){
            pre=curr;
            curr=curr->next;
        }
        pre->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    temp=head;
    
    while(temp->next!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;  
    }
    cout<<temp->data<<endl;

    
}