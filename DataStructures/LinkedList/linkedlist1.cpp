#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = NULL;

Node* createNewNode(int element){
    Node* temp = new Node();
    temp->data=element;
    temp->next=NULL;
    return temp;
}

Node * insertAtBeginning(int element){
    if (head==NULL){
        head = createNewNode(element);
        return head;
    }
    Node * temp = head;
    head = createNewNode(element);
    head->next = temp;
    return head;
}

Node* insertAfter(int key,int element){
    if (head==NULL){
        return NULL;
    }

    Node * temp  = head;
    while (temp->data!=key){
        if (temp->next==NULL){
            cout<<"DATA NOT FOUND"<<endl;
            return head;
        }
        temp=temp->next;
    }
    if (temp->data==key){
    Node* temp2 = temp->next;
    temp->next = createNewNode(element);
    temp->next->next = temp2;
    cout<<"FOUND";
    }
    return head;

}

Node* deleteItem(int element){

    if (head->data==element){
        Node * temphead = head;
        head = head->next;
        delete temphead;
        return head;
    }
    Node * temp = head;
    while (temp->next->data!=element){
        if (temp->next==NULL){
            return head;
        }
        temp= temp->next;
    }
    Node * temp3 = temp->next->next;
    delete temp->next;
    temp->next = temp3;
    return head;
}

Node* insertBefore(int key, int element){
    if (head==NULL){
        return NULL;
    }
    if (head->data==key){
        head =insertAtBeginning(element);
        return head;
    }
    Node * temp  = head;
    while (temp->next->data!=key){
        if (temp->next==NULL){
            return head;
        }
        temp=temp->next;
    }
    if (temp->next->data==key){
        Node* temp2 = temp->next;
        Node* temp3 = createNewNode(element);
        temp->next= temp3;
        temp3->next=temp2;
        cout<<"FOUND";
    }
    return head;
}

Node* insertAtEnd(int element){
    if (head==NULL){
        head = createNewNode(element);
        return head;
    }

    Node* temp = head;
    while (temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=createNewNode(element);
    return head;
}



void printLinkedList(){
    if (head==NULL){
        cout<<"EMPTY";
        return;
    }
    Node* temp = head;
    while (temp->next!=NULL){
        cout<<(temp->data)<<" ";
        temp = temp->next;
    }
    cout<<(temp->data);
}

int main(){
    head = insertAtBeginning(5);
    head = insertAtBeginning(6);
    head = insertAtBeginning(1);
    head = insertAtEnd(7);
    head = insertAtEnd(17);
    head = insertBefore(1,99);
    head = insertAfter(6,912);
    head = deleteItem(7);
     head = deleteItem(99);
    cout<<"Head data: "<<head->data<<endl;
    cout<<"DATA"<<endl;
    printLinkedList();
}