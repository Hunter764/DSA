#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int value){
        data = value;
        left = right = NULL;
    }

};

Node* insert(Node* root, int value){
    if(root == NULL){
        return new Node(value);
    }
    if(value< root->data){
        root->left = insert(root->left,value);
    } 
    else if(value > root->data){
        root->right = insert(root->right,value);
    }
    return root;
}

void Inorder(Node* root){
    if(root == NULL){
        return;
    }
    
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);

}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    cout<<"Inorder traversal:";
    Inorder(root);
    cout<<endl;
}

