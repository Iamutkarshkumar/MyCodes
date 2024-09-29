#include <bits/stdc++.h>
using namespace std;
class NODE{
    public:
    int data;
    NODE* next;
    NODE(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    // NODE a1;
    // a1.data=4;
    // a1.next=NULL;
    // NODE b1;
    // a1.next=b1;
    // b1.data=5;
    // b1.next=NULL;
    // cout<<b1.data<<" "<<a1.data;



    // NODE* temp;
    // temp=new NODE(28);
    // cout<<temp->next;


    // NODE* head;
    // head =new NODE(1);
    // NODE* a1;
    // a1=new NODE(5);
    // head->next=a1;
    // NODE* temp;
    // temp->next=head;
    // while(temp->next!=NULL){
    //     cout<<temp->data;
    //     temp->next=head->next;
    // }
    // cout<<a1->data;
    // cout<<head->next<<endl;
    // cout<<a1;


    // NODE* head=NULL;
    // int arr[]={2,4,6,8,10};
    // for(int i=0;i<5;i++){
    //     if(head==NULL){
    //         head=new NODE(arr[i]);
    //     }
    //     else{
    //         NODE* temp;
    //         temp=new NODE(arr[i]);
    //         temp->next=head;
    //         head=temp;
    //     }
    // }
    //printing of elements of linked list
    // NODE*temp=head;
    //  while(temp!=NULL){
    //     cout<<temp->data<<endl;
    //     temp=temp->next;
    // }


//adding node at the end
    // NODE* tail=head;
    // while(tail->next!=NULL){
    //     tail=tail->next;
    // }
    // NODE* e;
    // e=new NODE(0);
    // tail->next=e;

    // //printing
    // NODE*temp=head;
    // while(temp!=NULL){
    //     cout<<temp->data<<endl;
    //     temp=temp->next;
    // }

    //ADDING ELEMENTS OF ARRAY AT THE END OF THE LINKED LIST
    int brr[]={11,22,33,44,55,66};
    int n=sizeof(brr)/sizeof(brr[0]);
    NODE* head=NULL;
    NODE* tail=NULL;
    for(int i=0;i<=n;i++){
        if(head==NULL){
            head=new NODE(brr[i]);
            tail=head;
        }
        else{
            tail->next=new NODE(brr[i]);
            tail=tail->next;
        }
    }

    //adding element at specific position
    NODE* x=head;
    NODE* y=new NODE(0);
   
    while(x->next->data!=55){
        x=x->next;

    }
    y->next=x->next;
    x->next=y;
    //printing
    NODE* temp=head;
    while(temp->next!= NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    

}