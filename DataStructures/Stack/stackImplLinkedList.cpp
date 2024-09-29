#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class Stack{
    private:
    int data;
    Node* next;
    Node* top;

    public:
    Stack(){
        top= NULL;
    }

    void push(int data){
    Node* node = new Node();
    node->data = data;
    node->next = top;
    top=node;
    }

    void pop(){
    if (top==NULL){
        cout<<"Empty stack\n";
        return;
    }
    Node* temp = top;
    top= temp->next;
    delete temp;
    }

    bool isEmpty(){
        if (top!=NULL){
            return false;
        }
        else return true;
    }

    void print(){
        Node* temp= top;
        cout<<"List:";
        while (temp!=NULL){
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
    }

};
int main(){

    Stack A;
    A.push(1);
    A.push(2);
    A.push(3);
    //B.print();
    A.pop();
    cout<<A.isEmpty();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.print();
}