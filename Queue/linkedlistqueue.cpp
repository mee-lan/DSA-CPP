#include <iostream>
using namespace std;


struct Node{
    int data;
    Node* next;
    Node* prev;
};

class LinkedListAsQueue{
    private:
    Node* front;
    Node* back;


    public:
    LinkedListAsQueue(){
        front = NULL;
        back = NULL;
    }
    Node* createNewNode(int element){
        Node* temp = new Node();
        temp->data = element;
        temp->next = NULL;
        temp->prev = NULL;
        return temp;
    }
    void enqueue(int element){
        if (front==NULL){
            front = createNewNode(element);
            back=front;
            return;
        }
        Node * temp = back;
        back = createNewNode(element);
        back->prev = temp;
        back->prev->next = back;
        front->next= temp;
    }
    void dequeue(){
        if (front == NULL){
            cout<<"Empty Queue";
            return;
        }
        if (front==back){
            cout<<"dequeued:"<<front->data<<endl;
            front =NULL;
            back = NULL;
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
    }

    void printAll(){
    if (front==NULL){
        cout<<"EMPTY";
        return;
    }

    Node* temp = front;
    while (temp!=NULL){
        cout<<(temp->data)<<endl;
        temp = temp->next;
    }
    }

};

int main(){
    LinkedListAsQueue q;
    q.dequeue();
    q.printAll();
}