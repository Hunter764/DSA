//Implementing DoublyLinkedList 

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head;  //global variable - pointer to head node
struct Node* GetNewNode(int x){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)); //malloc  is used to reserve memory in heap
    //This reserved memory can be referenced through variable temp which is pointer to node
    //And can fill the value to Node through thi variable temp
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}  
void InsertAtHead(int x)
{
//local varibale
//Will be cleared from memory when function call will finish
// struct Node myNode;
// myNode.data = x;
// myNode.prev = NULL;
// myNode.next = NULL;

struct Node* newNode = GetNewNode(x);
if(head == NULL){
    head = newNode;
    return;
}
head->prev = newNode;
newNode->next = head;
head = newNode;
}

void Print(){
    struct Node* temp = head;
    printf("Forward: ");
    while(temp !=NULL){
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void ReversePrint(){
    struct Node* temp = head;
    if(temp == NULL) return;  //empty list, exit
    //Going to last Node
    while(temp->next != NULL){
        temp = temp->next;
    }
    //Traversing backward using prev pointer
    printf("Reverse: ");
    while(temp != NULL){
        printf("%d", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main(){
    head = NULL;
    InsertAtHead(2); Print(); ReversePrint();
    InsertAtHead(4); Print(); ReversePrint();
    InsertAtHead(6); Print(); ReversePrint();

}

// Forward: 2
// Reverse: 2
// Forward: 42
// Reverse: 24
// Forward: 642
// Reverse: 246