//Optimal approach:- Slow and fast pointer
//Detect loop in a LL

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data =data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

bool detectloop(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast !=nullptr && fast->next !=nullptr){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }
    return false;
}

int main(){
     // Create a sample linked list
    // with a loop for testing
    
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
    fifth->next = third; 

    // Check if there is a loop 
    // n the linked list
    if(detectloop(head)){
        cout<<"loop  detected in the given LL"<<endl;
    }
    else{
        cout<<"No loop is detected"<<endl;
    }
     // Clean up memory (free the allocated nodes)
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}

// loop  detected in the given LL