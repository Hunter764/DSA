#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        right = left =NULL;
    }
};

//fxn to perform postorder traversal and store the value in vector array
void postorder(Node* root, vector<int> &arr){
    if(root ==NULL){
        return ;
    }
    postorder(root->left,arr);
    postorder(root->right,arr);
    arr.push_back(root->data);

}

//fxn to initiate postorder traversal and return the resulting vector

vector<int> postOrder(Node* root){
    vector<int> arr; //creating empty vector to store postorder traversal values and return resulting values 
    postorder(root,arr);

    return arr;
}



int main(){
    //creating a sample binary tree

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    //getting Postorder traveral;

    vector <int> result = postOrder(root);

    cout<<"Postorder traversal:";

    for(int value : result){
        cout<< value <<" ";
    }
    cout<<endl;

    return 0;
}

//Output