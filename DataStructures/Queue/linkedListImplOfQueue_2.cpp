#include <iostream>
using namespace std;

struct Node{
    // int head;
    // int tail;
    int data;
    Node* next;
};
//GLOBAL:
Node* front= NULL;
Node* rear=NULL;


void enqueue(int data){
    Node* temp = front;
    Node* node = new Node();

    if(front==NULL & rear==NULL) 
    {
        front=rear=node;
        return;
    }
    node->data=data;
    node->next=NULL;

    rear->next=node;
    rear=node; 
}

void dequeue(){
    if(front==NULL) return;
    if(front==rear) {
        delete front;
        front=rear=NULL;
        return;
    }
    Node* temp = front->next;
    delete front;
    front=temp;

}
void Print(){
    Node* temp = front;
    cout<<"\nList:\n";
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}


int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    dequeue();
    dequeue();
    Print();

}