#include<iostream>
#include<vector>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data =value;
        left = right =NULL;
    }
};

//fxn to perform preorder traversal of the tree and store values in 'arr'
void preorder(Node* root , vector<int> &arr){

    if(root ==NULL){
        return;
    }
    arr.push_back(root->data); //pushing current nodevalue to vector
    preorder(root->left,arr);
    preorder(root->right,arr);

}

//fxn to initiate preorder traversal and return the resulting vector
vector<int> preOrder(Node* root){
    vector<int> arr;
    preorder(root,arr);
    return arr;
}

int main(){
    Node* root = new Node(1);
    root->left  = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root->left->left = new Node(4);

    //Getting preorder traversal
    vector<int> result = preOrder(root);

    //Display preorder traversal
    cout<<"Preorder Traversal:";

    for(int value:result){
        cout<<value<<" ";
    }
    cout << endl;

    return 0;
}

//Preorder traversal: 1 2 4 5 3