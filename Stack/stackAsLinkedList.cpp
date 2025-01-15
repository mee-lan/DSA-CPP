#include <iostream>
using namespace std;


struct Node{
    int data;
    Node* next;
};

class LinkedListStack{
    private:
    Node* head;

    public:
    LinkedListStack(){
        head = NULL;
    }
    Node* createNewNode(int element){
        Node* temp = new Node();
        temp->data = element;
        temp->next = NULL;
        return temp;
    }
    void push(int element){
        Node * temp = head;
        head = createNewNode(element);
        head->next= temp;
    }
    
    void pop(){
        if (head ==NULL){
            cout<<"Empty Stack";
            return;
        }

        Node * temp = head;
        head = head->next;
        delete temp;
    }

    void printAll(){
    if (head==NULL){
        cout<<"EMPTY";
        return;
    }

    Node* temp = head;
    while (temp!=NULL){
        cout<<(temp->data)<<endl;
        temp = temp->next;
    }
    }

};

int main(){
    LinkedListStack s1;
    cout<<"BEFORE POPPING"<<endl;
    s1.push(5);
    s1.push(56);
    s1.push(66);
    s1.printAll();
    cout<<"AFTER POPPING"<<endl;
    s1.pop();
    s1.pop();
    s1.printAll();
}