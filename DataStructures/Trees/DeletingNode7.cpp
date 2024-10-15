
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
    else { return search(root->right,x);
    }
    return result;
}

Node * findMin(Node* root){
    if (root==NULL) return root;
    if (root->left==NULL) return root;
     findMin(root->left);
}

Node* delNode(Node* root,int data){
if (root==NULL) return root;
if (root->data >data) root->left = delNode(root->left,data);
else if (root->data <data)  root->right = delNode(root->right,data);
else { //NODE FOUND!!
//CASE1: No child
if (root->left==NULL && root->right==NULL){
    delete root;
    root=NULL;
    return root;
}
//Case2: 1 Child
else if (root->left==NULL)
{ Node * temp= root;
  root=root->right;
  delete temp;
  return root;  
}
else if (root->right==NULL)
{ Node * temp= root;
    root=root->left;
    delete temp;
  return root;  
}

//Case3 : 2 child
else{
    Node * temp = findMin(root->right);
    root->data = temp->data;
    root->right=delNode(root->right,temp->data);
    return root;
}
}
}


int main(){
    Node* root=NULL;

    root=insert(root,5);
    root=insert(root,10);
    root=insert(root,6);
    root=insert(root,19);

    //cout<<(findMin(root-))->data;

    cout<<search(root,19);

    root=delNode(root,19);

    cout<<search(root,19);
}