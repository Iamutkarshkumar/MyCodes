#include <bits/stdc++.h>
using namespace std;

class Queue{
    int* arr;
    int front, rear;
    int size;
    public:
    Queue(int n){
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    bool IsEmpty(){
        return front == -1;
    }

    bool IsFull(){
        return rear == size - 1;
    }

    void enqueue(int x){
        if(IsFull()){
            cout << "Overflow" << endl;
        }
        else{
            if(IsEmpty()){
                front = 0;
            }
            rear++;
            arr[rear] = x;
        }
    }

    void dequeue(){
        if(IsEmpty()){
            cout << "Underflow" << endl;
        }
        else{
            if(front == rear){
                front = -1;
                rear = -1;
            }
            else{
                front++;
            }
        }
    }

    void show(){
        if(IsEmpty()){
            cout << "Queue is empty" << endl;
        }
        else{
            for(int i = front; i <= rear; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Queue q(4);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.show();
    return 0;
}
