#include <iostream>
#include <stack>
using namespace std;


struct Node{
    int data;
    Node* next;
};

//GLOBALS:
Node* head= NULL;

void reverse(){
    if (head==NULL) return;
    Node* temp = head;
    stack<Node*> s;
    while(temp->next!=NULL){
        s.push(temp);
        temp= temp->next;
    }
    head=temp;
    while(!s.empty()){
        temp->next=s.top();
        temp=s.top();
        s.pop();
    }
    temp->next=NULL; //Do this
}

void Insert(int data,int pos){
Node* temp = new Node();

Node* temp1 = head;
temp->data = data;
temp->next= NULL;

if (pos==1){
    temp->next= head;
    head=temp;
    temp->data= data;
    return;
}

for (int i=0;i<pos-2;i++){ //pos-2 because we are using index 1,2,3 system here  not 0,1,2.
    temp1 = temp1->next;
}
temp->next= temp1->next;
temp1->next=temp;

// temp->next= head;
}
void print(){
    Node* temp = head;
    cout<<"\nList:\n";
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}


int main(){
    Insert(1,1);
    Insert(2,2);
    Insert(3,3);
    Insert(4,4);
    print();
    reverse();
    print();
}