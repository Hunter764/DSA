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
        data=data1;
        next = nullptr;
    }
};

Node* ReversedLL(Node* head){
    Node* temp = head;
    stack<int> st;
    while(temp !=NULL){
        st.push(temp->data);
        temp = temp->next;
    }

    temp =head;
    while( temp != NULL)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }  

    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp !=nullptr){
        cout<<temp->data<<" "<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout<<"Original LL:"<<endl;
    printLL(head);

    head = ReversedLL(head);

    cout<<"ReversedLL:"<<endl;

    printLL(head);

    return 0;
}

// Original LL:
// 1 
// 2 
// 3 
// 4 

// ReversedLL:
// 4 
// 3 
// 2 
// 1