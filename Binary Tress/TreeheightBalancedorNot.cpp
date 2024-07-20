//Check if the Binary Tree is Balanced Binary Tree

#include<iostream>
#include<algorithm>

using namespace std;

struct Node{
    int data;
    Node*left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }

};

class Solution{
    public:

    bool isBalanced(Node* root){
        if(root == nullptr){
            return true;
        }

        //calculate the height of left and right subtree
        int lh = getHeight(root->left);
        int rh = getHeight(root->right);

        // Check if the absolute difference in heights
        // of left and right subtrees is <= 1
        if (abs(lh - rh) <= 1 &&
            isBalanced(root->left) &&
            isBalanced(root->right)) {
            return true;
        }

            return false;
    }

    int getHeight(Node * root){
        if(root == nullptr){
            return 0;
        }

        int lh = getHeight(root->left);
        int rh = getHeight(root->left);


        return max(lh, rh) +1;
    }
};


int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(6);
    root->left->right->right->right = new Node(7);

    // Creating an instance of the Solution class
    Solution solution;

    // Checking if the tree is balanced
    if (solution.isBalanced(root)) {
        cout << "The tree is balanced." << endl;
    } else {
        cout << "The tree is not balanced." << endl;
    }

    return 0;
}