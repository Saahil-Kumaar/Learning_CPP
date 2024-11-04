/*
    Traversals:
        Preorder Traversal:
            Root    Left    Right
        Inorder Traversal:
            Left    Root    Right
        Postorder Traversal:
            Left    Right   Root
*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node (int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data << " ";
    inorder(root->right);
}

void postorder(struct Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data << " ";
}

/*
      1
     /  \
    2    3
   / \  / \
  4   5 6  7

*/
int main(){
    struct   Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preorder(root); // Output: 1 2 4 5 3 6 7
    cout<<endl;
    inorder(root); // Output: 4 2 5 1 6 3 7 
    cout<<endl;
    postorder(root); // Output: 4 5 2 6 7 3 1
    cout<<endl;
    
    return 0;
}