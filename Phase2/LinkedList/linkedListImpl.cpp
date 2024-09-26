#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

Node* Insert(Node*,int );
void Print(Node*);
struct Node* head;

int main(){
    struct Node* head;
    head= NULL;
    int i,n,x;
    cout<<"How many data you want to enter";
    cin>>n;
    for (i=0;i<n;i++){
        cout<<"\nEnter data "<<endl;
        cin>>x;
        head = Insert(head,x);
        Print(head);
    }
    
}

//Inserting node at initial position
Node * Insert(Node* head,int x){
    Node * temp = new Node;
    //WITH C Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data= x;
    temp->next = head;
    head= temp;
    return temp;
    // delete temp;
}

//Printing the list:
void Print(Node* head){
   Node* temp = head;
   cout<<"List is:"<<endl;
   while (temp!=NULL){
    cout<<temp->data<<"\t";
    temp=temp->next;
   }
}






