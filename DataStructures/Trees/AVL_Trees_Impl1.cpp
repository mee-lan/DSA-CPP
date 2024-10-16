#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    int height;
};
Node* getNewNode(int data){

    Node* newNode = new Node();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    newNode->height=1;
    return newNode;
}

int getHeight(Node * node){
    if (node==NULL) return 0;
    else return node->height;
}

int getBalance(Node * node){
    return  getHeight(node->left) - getHeight(node->right);
}
Node* rightRotation(Node* root){
    Node* temp = root->left->right;
    Node * child= root->left;
    
    child->right = root;
    root->left = temp;
     
    //Update height
    root->height = 1+max(getHeight(root->left),getHeight(root->right));//paila tala ko node ko update garnu parxa
    child->height = 1+max(getHeight(child->left),getHeight(child->right));

    return child; //return child (i.e new root) to be linked with upper node when fn returns stack frame
}
Node* leftRotation(Node* root){
    Node* temp = root->right->left;
    Node* child = root->right;
    
    child->left = root;
    root->right = temp;
     
    //Update height
    root->height = 1+max(getHeight(root->left),getHeight(root->right));//paila tala ko node ko update garnu parxa
    child->height = 1+max(getHeight(child->left),getHeight(child->right));

    return child;
}

Node * insert(Node* root, int data){
    if (root==NULL){
        root = getNewNode(data);
        return root;
    }
    
        //CASE:1 if data smaller than parent
        if (data< root->data) root->left=insert(root->left,data);
        else root->right=insert(root->right,data);

        //Update height
 
        root->height = 1+ max(getHeight(root->right),getHeight(root->left));
        // NOTE: root->height = 1+ max(root->right->height,root->left->height) [This throws error if root->left or right doesnt exist So we used fn]


    //BALANCING CHECK:
     int balance = getBalance(root);

     //CASES:
     
     //Left Left
     if (balance>1 && data< root->left->data){
        return rightRotation(root); 
     }

     //Right Right
     else if (balance<-1 && data> root->right->data){
        return leftRotation(root);
     }
     //Left Right
     else if (balance >1 && data> root->left->data){
        root->left= leftRotation(root->left);
        return rightRotation(root);
     }
     //Right Left
     else if (balance < - 1 && data< root->right->data){
        root->right = rightRotation(root->right);
        return leftRotation(root);
     }
     //Balanced
     else return root;
}

void inorderPrint(Node * root){
    if (root==NULL) return;

    inorderPrint(root->left);
    cout<<root->data<<"\t";
    inorderPrint(root->right);

}


int main(){
    Node* root = NULL;
    root = insert(root,1);
    root = insert(root,11);
    root = insert(root,4);
    root = insert(root,10);
    root = insert(root,88);
    inorderPrint(root);
    
    
}