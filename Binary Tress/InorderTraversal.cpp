#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* left ;
    Node* right;

    Node(int value){
        data = value;
        right=left = NULL;
    }
};

void inorder(Node*root , vector<int> &arr){
   if(root == NULL){
    return;
   } 

   //left->root->right
   
   inorder(root->left,arr);
   arr.push_back(root->data);
   inorder(root->right,arr);
}

vector <int> inOrder(Node * root){
    vector<int> arr;
    inorder(root,arr);
    return arr;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
 
    vector <int> result = inOrder(root);

    cout<<"Inorder traversal:";

    for(int value:result){
        cout<<value<<" ";
    }
    cout <<endl;
    return 0;

}