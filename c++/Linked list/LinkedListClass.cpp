#include<iostream>
using namespace std;
class Node{//user defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{//user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }

    void display(){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next = temp;
            tail = temp;
        } 
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) tail=head=temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){  //O(n)
        if(idx<0 || idx>size) cout<<"INVALID INDEX"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1; i<=idx-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    int getAtIdx(int idx){
        if(idx<0 || idx >= size){
            cout<<"INVALID INDEX"<<endl;
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1; i<=idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
        
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"LIST IS EMPTY!!"<<endl;
        }
        head=head->next;
        size--;
    }

    void deleteAtTail(){
        if(size==0){
            cout<<"LIST IS EMPTY!!"<<endl;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"LIST IS EMPTY!!"<<endl;
        }
        else if(idx<0 || idx>=size){
            cout<<"INVALID INDEX"<<endl;
        }
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1; i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    
};


int main(){
    // LinkedList ll;
    // ll.insertAtHead(10);
    // ll.display();
    // ll.insertAtTail(20);
    // ll.display();
    // ll.insertAtTail(30);
    // ll.display();
    // ll.insertAtTail(40);
    // ll.display();
    // ll.insertAtTail(50);
    // ll.display();
    // ll.insertAtIdx(2,0);
    // ll.display();
    // ll.deleteAtIdx(2);
    // ll.display();
    // cout<<ll.getAtIdx(2);

    // cout<<ll.size<<endl;
    // cout<<ll.tail->val<<endl;

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     ll.insertAtIdx(i,x);
    // }
    // int target;
    // cout<<" enter target : ";
    // cin>>target;
    // for(int i=0;i<n;i++){
    //     if(ll.getAtIdx(i)==target){
    //         ll.deleteAtIdx(i);
    //     }
    // }
    // ll.display();


   
}