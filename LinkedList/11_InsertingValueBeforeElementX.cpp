#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr){
        data = data1;
        next = next1;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void printList(Node*head){
    Node* temp = head;
    while(temp != nullptr){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
}
//Inserting a value before element x of Linkedlist

Node* insertBeforeValue(Node* head, int el, int val){
    if(head == NULL){
        return NULL;
    }
    if(head->data == val){
        return new Node(el,head);
    }
    Node* temp = head;
    bool found = false;
    while(temp->next != NULL){
        if(temp->next->data == val){
            Node *x = new Node(el,temp->next);
            temp->next = x;
            found =1;
            break;
        }
        temp = temp->next;
    }
    if(found == false){

    }
    return head;
}


int main(){
    vector<int> arr = {12,4,5,6,7};
    Node * head = convertArr2LL(arr);
    head = insertBeforeValue(head,100,4);
    printList(head);
    
}


