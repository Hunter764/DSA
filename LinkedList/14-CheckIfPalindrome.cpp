//Brute force approach Using stack 
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

void printLL(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

bool  isPalindrome(Node* head){
    Node*temp = head;
    stack<int> st;

    while(temp != NULL){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    while(temp != NULL){
        if(temp->data != st.top()) return false;
        temp = temp->next;
        st.pop();
    }
    return true;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(5);
    head->next->next = new Node(2);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(1);

    cout<<"Original LL:" ;
    printLL(head);

    if(isPalindrome(head)){
        cout<<"The given LinkedList is a Palindrome"<<endl;
    }
    else{
        cout<<"It is not a Palindrome "<<endl;
    }

    return 0;


}