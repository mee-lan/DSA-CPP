#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int coeff;
    int degree;
    Node* next;
};

Node* createNewNode(int coeff,int degree,Node* poly){
    poly = new Node();
    poly->coeff = coeff;
    poly->degree = degree;
    poly->next = NULL;
    return poly;
}

Node* updateNode(int coeff,int degree,Node* poly){
    Node* temp = poly;
    if (poly ==NULL){
        poly = createNewNode(coeff,degree,poly);
        return poly;
    }
    while (temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = createNewNode(coeff,degree,poly);
    return poly;
}
Node* addPoly(Node* poly1,Node* poly2,int n1,int n2){
    cout<<"done"<<endl;
    
    int size = max(n1,n2);
    cout<<size;
    Node * poly = NULL;
    Node * poly1start = poly1;
    Node * poly2start = poly2;

    while (poly1->degree != poly2->degree){
        if (poly1->degree > poly2->degree){
            poly = updateNode(poly1->coeff,poly1->degree,poly);
            poly1 = poly1->next;
        }
        else {
            poly = updateNode(poly2->coeff,poly2->degree,poly);
            poly2 = poly2->next;
        }
    }

    poly1 = poly1start;
    poly2 = poly2start;

    while (poly1!=NULL){
        while (poly2!=NULL){
            //poly = updateNode(poly1->coeff,poly1->degree,poly);
            if (poly1->degree == poly2->degree){
                //cout<<"Same degree element";
                poly=updateNode(poly1->coeff+poly2->coeff,poly1->degree,poly);
            }
            //cout<<"poly1->coeff= "<<poly1->coeff<<" poly1->coeff= "<<poly2->coeff<<endl;
            poly2 = poly2->next;
        }
        poly2 = poly2start;
        poly1 = poly1->next;
    }
    return poly;
}

void printdata(Node* poly){
    cout<<"Data:"<<endl;
    while (poly!=NULL){
        cout<<poly->coeff<<"x^"<<poly->degree<<" + ";
        poly = poly->next;
       
    }
}

int main(){
    Node* poly1 = NULL;
    Node* poly2 = NULL;
    Node* poly= NULL;

    int n1,n2,coeff;
    cout<<"enter degree of first polynomial"<<endl;
    cin>>n1;
    cout<<"enter degree of second polynomial"<<endl;
    cin>>n2;

    cout<<"Enter data for first polynomial"<<endl;
    for (int i =n1 ;i>=0;i--){
        cout<<"Coeff of degree:"<<i<<">"<<endl;
        cin>>coeff;
        poly1 = updateNode(coeff,i,poly1);
    }

    cout<<"Enter data for second polynomial"<<endl;
    for (int i =n2 ;i>=0;i--){
        cout<<"Coeff of degree:"<<i<<">"<<endl;
        cin>>coeff;
        poly2 = updateNode(coeff,i,poly2);
    }
    poly = addPoly(poly1,poly2,n1,n2);
    printdata(poly);

}