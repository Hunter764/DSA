//Reverse Links in place (Iterative)

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

Node*  ReverseLL(Node* head){
    Node* temp = head;
    Node* prev = NULL;

    while(temp != nullptr){
        // Store the next node in
       // 'front' to preserve the reference
        Node* front = temp->next;
        // Reverse the direction of the
       // current node's 'next' pointer
       // to point to 'prev'
        temp->next = prev;
         // Move 'prev' to the current
        // node for the next iteration
        prev = temp;
        // Move 'temp' to the 'front' node
        // advancing the traversal
        temp = front;
    }
      // Return the new head of
   // the reversed linked list
    return prev;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" "<<endl;
        temp = temp->next;
    }
}



int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout<<"Original LL: "<<endl;;
    printLL(head);

    head = ReverseLL(head);

    cout<<"ReversedLL:"<<endl;

    printLL(head);
    return  0;
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