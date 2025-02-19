#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class Queue{

    Node* front;
    Node* rear;

    public:
    Queue(){
        front=NULL;
        rear=NULL;
    }
    Node * getNode(int x){
        Node* p = new Node;
        p->data= x;
        p->next=NULL;
        return p;
    }

    void enqueue(int x){
        Node* ptr = getNode(x);
        if (front==NULL){
            front=ptr;
            rear=ptr;
            cout<<"added first element"<<front->data<<endl;
            return;
        }
        rear->next=ptr;
        rear=ptr;
        cout<<"added"<<rear->data;
    }
    int dequeue(){
        if (front==NULL){
            cout <<"Empty Queue"<<endl;
            return -1;
        }
        int x = front->data;
        if (front->next==NULL){
            //cout<<"Deleted element: "<<front->data<<endl;
            delete front;
            front=NULL;
            rear=NULL; 
            return x;
        }
        Node * temp = front;
        front=front->next;
        delete temp;
        return x;
    }
};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(10);

    cout<<"Dequeued"<<q.dequeue();
    cout<<"Dequeued"<<q.dequeue();
    cout<<"Dequeued"<<q.dequeue();
    cout<<"Dequeued"<<q.dequeue();

    //cout<<q.dequeue();
}