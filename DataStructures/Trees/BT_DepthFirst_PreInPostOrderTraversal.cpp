#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* getNewNode(int x){

    Node* root= new Node();
    root->data=x;
    return root;
}

Node* insert(Node* root,int x){
   
    if (root==NULL){
        root = getNewNode(x);
        return root;
    }
    else if(x<= root->data){
     root->left = insert(root->left,x);
    }
    else { root->right = insert(root->right,x);
    }

    return root;
}

bool search(Node* root ,int x){
    bool result=false;
    if(root==NULL){
        return false;
    }
    else if (root->data==x){
        return true;
    }
    else if(x<= root->data){
     return search(root->left,x);
    }
    else { return insert(root->right,x);
    }
    return result;
}
void preOrderPrint(Node* root){
    if (root==NULL) return;
    
    cout<<root->data<<"\t";

     preOrderPrint(root->left);
     preOrderPrint(root->right);

    
}


void inOrderPrint(Node* root){
    if(root==NULL) return ;
   

     inOrderPrint(root->left);

     cout<<(root->data)<<"\t";

     inOrderPrint(root->right);
}
void postOrderPrint(Node* root){
    if(root==NULL) return ;
  
     postOrderPrint(root->left);
     postOrderPrint(root->right);

     cout<<(root->data)<<"\t";
}






int main(){
   // int max=0;
    Node* root=NULL;
    
    root=insert(root,10);
    root=insert(root,6);
    root=insert(root,15);
    root=insert(root,4);
    root=insert(root,3);
    root=insert(root,5);
    root=insert(root,7);
    root=insert(root,14);
    root=insert(root,16);
    root=insert(root,9);
    root=insert(root,8);

    //cout<<search(root,1);
    //cout<<height(root);
    postOrderPrint(root); //BINARY SORTED
}
