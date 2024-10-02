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

int main(){
    Node* root=NULL;

    root=insert(root,5);
    root=insert(root,10);
    root=insert(root,6);
    root=insert(root,19);
    cout<<search(root,10);
}
