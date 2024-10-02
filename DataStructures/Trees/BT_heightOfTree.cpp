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
//int height(Node* root){

    //MY IMPLEMENTATION FIRST HAND:
    // int temp1=0,temp2=0;
    // if (root==NULL) return -1;

    // if (root->right==NULL && root->left==NULL){
    //     return 0;
    // }
    // if(root->right!=NULL){
    //     temp1= height(root->right);
    // }
    // if (root->left!=NULL){
    //     temp2=height(root->left);
    // }
    // return (temp1>temp2)?temp1+1:temp2+1;
    //}

    //BETTER IMPL:
    int height(Node* root) {
    if (root == NULL) return -1; // return -1 for an empty tree

    // Recursive case: calculate height of left and right subtrees
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    // Return the greater height plus one for the current node
    return 1 + max(leftHeight, rightHeight);
}



int main(){
   // int max=0;
    Node* root=NULL;
    
    root=insert(root,5);
    root=insert(root,10);
    root=insert(root,6);
    root=insert(root,15);
    root=insert(root,35);
    root=insert(root,0);
    root=insert(root,4);
    root=insert(root,9);
    //cout<<search(root,1);
    cout<<height(root);
}
