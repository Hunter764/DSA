//Iterative Preorder Traversal of Binary Tree using stack
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct Node
{
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(nullptr), right(nullptr){}
};

class Solution{
    public:

    vector<int> preorderTraversal(Node* root){
        vector<int> arr;
        if(root==NULL){
            return arr;
        }

        stack<Node*> st;
        st.push(root);

        while(!st.empty()){
            root = st.top();
            st.pop();

            arr.push_back(root->val);

            if(root->right != nullptr){
                st.push(root->right);
            }

            if(root->left != nullptr){
                st.push(root->left);
            }
        }
        return arr;
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Solution sol;

    vector<int> result = sol.preorderTraversal(root);

    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;

}