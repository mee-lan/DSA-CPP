#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

 Node * getNewNode(int x,Node * parent){

    Node* root= new Node();
    root->data=x;
    //root->parent = NULL;
    return root;

}
void inOrderPrint(Node* root){
    if(root==NULL) return ;
   

     inOrderPrint(root->left);

     cout<<(root->data)<<"\t";
    
     //cout<<(root->parent->data)<<"\t";

     inOrderPrint(root->right);
}

Node * min(Node* root){
    if (root==NULL) return NULL;
    if (root->left==NULL) return root;
    else return min(root->left);
}

Node * findElement(Node* root,int data){
    if (root==NULL) return root;
    if (data < root->data) findElement(root->left,data);
    else if (data > root->data) findElement(root->right,data);
    else { //FOUND!
    return root;
    }
}

Node* inOrderSuccessor(Node * root,int data){
    Node * current = findElement(root,data);

    if (current->right !=NULL) 
    {
       // cout <<min(current->right)->data;
        return min(current->right);
    }
    else {
        Node * successor = NULL;
        Node * ancestor = root;

        while (ancestor!=current)
        if (current->data < ancestor->data){
            successor = ancestor; //this is the deepest node for which current node is in left
            ancestor = ancestor->left;
        }
        else {
            ancestor = ancestor->right;
        }
        return successor;
    }

}

Node* insert(Node* root,int x){
   
    if (root==NULL){
        root = getNewNode(x,root);
        //root->parent=root;
        return root;
    }
    else if(x<= root->data){
     root->left = insert(root->left,x);
     //root->left->parent=root;
    }
    else { 
    root->right = insert(root->right,x);
    // root->right->parent=root;
    }
    return root;
}


int main(){
    Node * root= NULL;
    root=insert(root,5);
    root=insert(root,10);
    root=insert(root,6);
    root=insert(root,2);
    root=insert(root,3);
    root=insert(root,4);
    inOrderPrint(root);
    Node * res = inOrderSuccessor(root,2);
    res==NULL ? cout<<"false" :cout<<res->data;

}