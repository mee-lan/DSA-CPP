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

bool isBinarySearchTree(Node* root,int minValue,int maxValue){
    if (root==NULL) return true;
    if (
    root->data >= minValue && //CONDITION CHECKS FOR CURRENT NODE
    root->data <= maxValue &&

    isBinarySearchTree(root->left,minValue,root->data)&& //RECURSIVE CALL for subtress
    isBinarySearchTree(root->right,root->data,maxValue)
    ) return true;
    else return false;
}
// bool utilBinaryTree(Node* root,int max){
//     bool b=false;
//     if (root==NULL) {
//         max=0;
//         return true;
//         }
//     if (root->data>max) {
//         max=root->data;
//         b =true;
//     }

//     while (b){
//     utilBinaryTree(root->left,max);
//     utilBinaryTree(root->right,max);
//     }
//     return b;
// }
// bool isBinarySearchTreeUsingInOrderTraversal(Node* root){
//     if (root==NULL) return true;
//     return utilBinaryTree(root,-100);
// }


int main(){
 Node* root = NULL;

    // 
    //      5
    //     / \
    //    4   10
    //         /
    //        2   <- This node breaks the BST property

    root = insert(root, 5);
    root = insert(root, 4);
    root = insert(root, 10);
    
    // Manually violate the BST property by setting 2 as the left child of 10
    //root->right->left = getNewNode(2); // This breaks the BST rule
    
    
    cout << isBinarySearchTree(root, -1000, 1000);
    //cout<<isBinarySearchTreeUsingInOrderTraversal(root);
}
