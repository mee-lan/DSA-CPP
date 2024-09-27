#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

//Globals
Node* head= NULL;

//Function Declaration
void insertAtHead(int);
void print();
void insertAtTail(int);
void reversePrint();


int main(){
    insertAtHead(1);
    insertAtHead(2);
    insertAtHead(3);
    insertAtHead(4);
    insertAtTail(5);//Output should be 2 1 3
    print();
    reversePrint();
}

void print(){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"\t";
       // cout<<temp->prev->data<<"\t";
        temp=temp->next;
        cout<<endl;
    }
}

void reversePrint(){
    Node* temp=head;
    while(temp->next!=NULL){ //Analayze these while loop conditions:
        temp=temp->next;
    }

    cout<<"reverse:"<<endl;
    while(temp!=NULL){        //And here;
    cout<<temp->data<<"\n";
    temp=temp->prev;
    }
}



void insertAtHead(int data){

    Node* node= new Node(); 
    //Here Node* node variable is at stack
    //Hence this node (variable) will be deleted after fn returns but the node itself wont be deleted
    node->data= data;
    node->next= head;
    node->prev = NULL;
    //cout<<"Previous is:" <<head->prev;
    if (head!=NULL) head->prev= node; //TAKE CARE OF THIS LINE!! wasted my 20 mins
    //At first insertion head is a null pointer so there is no such thing as head->prev
    //Hence should write the if condition

    head=node;
}

void insertAtTail(int data){
    Node* temp= head;
    Node* node= new Node();

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = node;
    node->prev= temp;
    node->data = data;
    node->next= NULL;

}