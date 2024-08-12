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

//Inserting a element at the Tail of the Lisnkedlist
Node* insertTail(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    Node * newNode = new Node(val);
    temp->next = newNode;
    return head;
}


int main(){
    vector<int> arr = {12,4,5,6,7};
    Node * head = convertArr2LL(arr);
    head = insertTail(head,100  );
    printList(head);
    
}

//output
// 12 4 5 6 7  100