#include <bits/stdc++.h>
using namespace std;
#define size 5
class Queue{
    public:
    int arr[size], front, rear;

    Queue(){
        front = -1;
        rear = -1;
    }

    bool isfull(){
        if(front == 0 && rear == size-1){
            return true;
        }
        return false;
    }

    bool isempty(){
        if(front == -1 || rear == -1){
            return true;
        }
        return false;
    }

    void enQueue(int el){
        if(isfull()){
            cout<<"Queue is full!"<<endl;
        }
        else{
            if(front == -1){
                front = 0;
            }
            (rear++)%size;
            arr[rear] = el;
            cout<<endl;  
        }
    }

    void deQueue(){
        if(isempty()){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            if(front>=rear){
                front = -1;
                rear = -1;
            }
            front++;
        }
    }

    void display(){
        if(isempty()){
            cout<<"Queue is empty!"<<endl;
        }
        int temp = front;

        while(temp!=rear){
            cout<<arr[temp]<<" ";
            temp++;
        }
        cout<<arr[temp]<<endl;    
    }
};

int main(){
    Queue Q;

    Q.enQueue(12);
    Q.enQueue(10);
    Q.enQueue(8);
    Q.enQueue(6);
    Q.enQueue(4);
    Q.display();
    Q.deQueue();
    Q.deQueue();
    Q.enQueue(99);
    Q.display();


}