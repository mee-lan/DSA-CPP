#include <iostream>
using namespace std;


struct Node{
    int data;
    Node* next;
};


//GlOBAL variables:
Node* head;

//Funtion Declaration
void Delete(int );
void Print();
void Insert(int ,int );
void Reverse();


//Main function
int main(){
int n;
head=NULL;
Insert(1,1);
Insert(3,2);
Insert(5,1);
Insert(4,2); //The final list should be : 5,4,1,3
Print();


Reverse();
Print();
}


void Reverse(){
    Node* previous;
    Node* current;
    Node* next;
    previous= NULL;
    current= head;
    

    while(current!=NULL){
    //First of all store the next node
    // As It will be deleted after changing current->next to previous  
    next= current->next;
    current->next= previous;
    previous= current; 
    current= next; //Not to be confused with next pointer of struct and local next pointer variable
    }

    head=previous;// Dont make mistake of (head=current) as at last current will be NULL 
}

//Inserting at Nth position
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

void Print(){
    Node* temp = head;
    cout<<"\nList:\n";
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}
