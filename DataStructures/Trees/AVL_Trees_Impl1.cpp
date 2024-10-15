#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    int height;
};
int height = 1;
Node* getNewNode(int data){

    Node* newNode = new Node();
    newNode->data=data;
    newNode->left==NULL;
    newNode->right==NULL;
    newNode->height=0;
    return newNode;
}

Node * insert(Node* root, int data){
    if (root==NULL){
        root = getNewNode(data);
        return root;
    }
    else {
        //CASE:1 if data smaller than parent
        if (data<=root->data){
        root->left=insert(root->left,data);
        root->height==height++;
        }

        //CASE 2: data greater than parent
        else{
            root->right= insert(root->right,data);
            root->height==height++;
        }
    }
    return root;
}

int main(){
    Node* root = NULL;
    root = insert(root,1);
    root = insert(root,2);
    cout<<"Hello";
}