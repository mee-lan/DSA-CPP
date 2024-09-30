#include <iostream>
using namespace std;
#define MAX_SIZE 8
class Queue{

public:
int front=-1;
int rear=-1;
int arr[MAX_SIZE];


void push(int data){ //ENQUEUE OPERATION
    if(front==-1 && rear==-1){
        front=0;
        rear=0;
    }
    else if(front==(rear+1)% MAX_SIZE){
        cout<<"ERROR! queue is Full!";
        return;
    }
    else{
        rear=(rear+1)%MAX_SIZE;
    }
    arr[rear]=data;
}
int pop(){ //DEQUEUE OPERATION!
   if(front==-1 && rear==-1){
    cout<<"ERROR! empty queue";
    return -1;
    }
    front=(front+1)%MAX_SIZE;
    int value= arr[(front+MAX_SIZE-1)%MAX_SIZE];
    //TO MAKE SURE IT DOESN'T GET -ve previous=(front=(front+N-1)%N)


    //IF IT IS THE LAST ELEMENT!
    if (front==rear){
        front==-1 && rear==-1;
    }
    return value;
}
bool isEmpty(){
    if(front!=-1 && rear!=-1) return false;
    else return true;
}

};

void print(Queue &q){
    if (q.front!=-1){
    cout<<"QUEUE ELEMENTS:\n";
    
    while (q.front!=q.rear){
        {
        cout<<"Index:"<<q.front<<" "<<"Data:"<<q.arr[q.front]<<"\n";
        q.front=(q.front+1)%MAX_SIZE;
        }
    }
    cout<<"Index:"<<q.front<<" "<<"Data:"<<q.arr[q.front]<<"\t";
    }

    else cout<<"Empty queue";
}

int main(){
    Queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.pop();
    q1.pop();
    q1.push(5);
    q1.push(6);
    q1.pop();
    q1.pop();
    q1.pop();
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    
    print(q1);
    cout<<q1.isEmpty();
}