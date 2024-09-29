#include <iostream>
using namespace std;



class Node{
    private:
    int data;
    Node* next;
    Node* head;

    public:
    Node(){
        head= NULL;
    }
    void push(int data){
    Node* node = new Node();
    node->data = data;
    node->next = head;
    head=node;
    }

    void pop(){
    Node* temp = head;
    head= temp->next;
    delete temp;
    }
    bool isEmpty(){
        if (head!=NULL){
            return false;
        }
        else return true;
    }

    void print(){
        Node* temp=head;
        cout<<"List";
        while (temp!=NULL){
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
    }

};


int main(){

    Node A;
    A.push(1);
    A.push(2);
    A.push(3);
    //B.print();
    A.pop();
    cout<<A.isEmpty();
    //A.pop();
    A.print();
}