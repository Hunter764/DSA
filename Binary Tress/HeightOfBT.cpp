#include<iostream>
#include<vector>
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

class Solution{
    public:

    //fxn to find maximum depth of a binary tree
    int maxDepth(Node* root){

        if(root==NULL){
            return 0;
        }
        //recursive call to find the
        //max depth of the left suntree

        int lh = maxDepth(root->left);

        //recursive call to find the 
        //maximum depth of the right subtree

        int rh = maxDepth(root->right);

        //return the maximum depth of the tree

        return 1 + max(lh,rh);
    }
};

//main fxn
int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(6);
    root->left->right->right->right = new Node(7);
    

    Solution solution;
    int depth = solution.maxDepth(root);

    cout << "Maximum depth of the binary tree: " << depth << endl;

    return 0;
}