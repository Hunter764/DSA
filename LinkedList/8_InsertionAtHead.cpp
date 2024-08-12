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

//Inserting a element at the head of the Lisnkedlist

Node* insertHead(Node*head, int val){
    return  new Node(val,head);  //here val-takes the vale & head-> tells whatvis next
    
}

int main(){
    vector<int> arr = {12,4,5,6,7};
    Node * head = convertArr2LL(arr);
    head = insertHead(head,100);
    printList(head);
    
}

//output
// 100 12 4 5 6 7 