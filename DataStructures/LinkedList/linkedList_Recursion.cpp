//Printing forward/Reverse using recursion

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

//GLOBALS
 //Node* head=NULL;

//Function Declaration
Node* Insert(Node*,int,int);
void print(Node* head);
Node* reverse(Node*);

int main(){
    Node* head=NULL;
    head=Insert(head,1,1);
    head=Insert(head,2,2);
    head=Insert(head,3,3);
    head=Insert(head,4,4);
    print(head);
    head= reverse(head);
    print(head);
}

Node* reverse(Node* head){
    Node* curr= head;
    if(curr->next==NULL){
        head=curr;
        return head;
    }
    Node* newHead= reverse(curr->next);
    Node* q= curr->next;
    q->next= curr;
    curr->next=NULL; //To ensure at the end last->next= NULL;
    return newHead;

}

//REVERSE LINKED LIST





//PRINTING FORWARD AND REVERSE USING RECURSION
//MAGIC ALGO : 
void print(Node* head){
    if (head==NULL) return;

    //IF print is above cout it gives reversed list.
    print(head->next);
    cout<<head->data<<"\t";
}







//Inserting at Nth position
Node* Insert(Node* head,int data,int pos){
Node* temp = new Node();
Node* temp1 = head;
temp->data = data;
temp->next= NULL;

if (pos==1){
    temp->next= head;
    head=temp;
    temp->data= data;
    return head;
}

for (int i=0;i<pos-2;i++){ //pos-2 because we are using index 1,2,3 system here  not 0,1,2.
    temp1 = temp1->next;
}
temp->next= temp1->next;
temp1->next=temp;

return head;
// temp->next= head;
}