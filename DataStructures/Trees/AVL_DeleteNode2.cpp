#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    int height;
};


Node* findMin(Node* root){
    if (root==NULL) return root;

    if (root->left==NULL) return root;
    else return findMin(root->left);
    
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




Node* deleteNode(Node* root,int data){

    if (root==NULL) return root;
    else if (data< root->data)
    {
        root->left= deleteNode(root->left,data);
    }
    else if (data > root->data)
    {
        root->right =deleteNode(root->right,data);
    }
    else {
        //FOUND 
        //Case1: leaf node 
        if (root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
        }
        //Case 2.1: 1 child (left child exist)
        else if (root->left!=NULL && root->right==NULL){
            Node* temp = root->left;
            delete root;
            root=temp;
        }
        // 2.2 Right child exists:
        else if (root->right!=NULL && root->left==NULL){
            Node* temp = root->right;
            delete root;
            root=temp;
        }
        else{ //Case3 : 2 children
        Node * temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right,temp->data);
         //notice we didnt change the root value to be returned! Because it wont be changed
        }
        
    }

    //Update root height;
    if (root==NULL) return root;
    root->height = 1+ max(getHeight(root->right),getHeight(root->left));

    //Balancing 
    int balance = getBalance(root);
    //CASE 1: Left Right
    if (balance > 1 && (getBalance(root->left)<=0)){
        root->left= leftRotation(root->left);
        return rightRotation(root);
    }

    //Case 2: Right left
    else if (balance <-1 && (getBalance(root->right)>=0)){
        root->right= rightRotation(root->right);
        return leftRotation(root);
    }

    //Case 3: Left Left
    else if (balance > 1){
        return rightRotation(root);
    }
    //Case 4: Right right
    else if(balance <-1){
        return leftRotation(root);
    }
    else { //Already balanced return potentiallly new root
        return root;
    }
}




Node* getNewNode(int data){

    Node* newNode = new Node();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    newNode->height=1;
    return newNode;
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


int main() {
    Node* root = NULL;
    root = insert(root, 1);
    root = insert(root, 11);
    root = insert(root, 4);
    root = insert(root, 10);
    root = insert(root, 88);
    
    cout << "Inorder traversal before deletion: ";
    inorderPrint(root);
    cout << endl;

    root = deleteNode(root, 1); // Update the root after deletion
    root = deleteNode(root, 11); // Update the root after deletion

    cout << "Inorder traversal after deletion: ";
    inorderPrint(root);
    cout << endl;

    return 0;
}
