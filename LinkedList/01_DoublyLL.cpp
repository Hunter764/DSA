#include<iostream>
using namespace std;


struct Node{
    int data;
    Node* next;
    Node* prev;
};

Node* head = nullptr; //Global variable - pointer to head node

//Function to create a new node
Node* GetNewNode(int x){
    Node* newNode = new Node(); //Allocate memory for a new node
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

//Function to insert a node at the head
void insertAtHead(int x){
    Node* newNode = GetNewNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode ->next = head;
    head = newNode; //update head to point to the new node
}


//Function to print the list in forward direction

void Print(){
    Node * temp = head;
    cout<<"Forward: ";
    while(temp !=NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<< endl;
}

//Function to print list in reverse direction
void ReversePrint(){
    Node* temp = head;
    if(temp == nullptr) return; //Empty list , exit

    //going to the last node
    while( temp->next != NULL){
        temp = temp->next;
    }

    //Traversing backward using prev pointer
    cout<<"Reverse: ";
    while (temp != NULL){
        cout<< temp->data<<" ";
        temp = temp ->prev;
    }
    cout<<endl;
}

int main(){
    head = NULL; //Intialize head to null

    insertAtHead(2);
    Print();         // Output: Forward: 2
    ReversePrint();  // Output: Reverse: 2

    insertAtHead(4);
    Print();         // Output: Forward: 4 2
    ReversePrint();  // Output: Reverse: 2 4

    insertAtHead(6);
    Print();         // Output: Forward: 6 4 2
    ReversePrint();  // Output: Reverse: 2 4 6

    return 0;
}

// Forward: 2 
// Reverse: 2 
// Forward: 4 2 
// Reverse: 2 4 
// Forward: 6 4 2 
// Reverse: 2 4 6 