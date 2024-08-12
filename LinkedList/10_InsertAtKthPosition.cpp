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

//Inserting a element at the Kth position  of the Lisnkedlist

Node * insertPosition(Node* head , int el, int k){
    if(head ==NULL){
        if(k==1){
            return new Node(el);
        }
        else{
            return head;
        }
    }
    if(k==1){
        return new Node(el,head);
    }
    int cnt =0 ;
    Node* temp =head;
    while(temp !=NULL){
        cnt++;
        if(cnt == k-1){
            Node *x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}


int main(){
    vector<int> arr = {12,4,5,6,7};
    Node * head = convertArr2LL(arr);
    head = insertPosition(head,100,3);
    printList(head);
    
}

//output
//12 4 100 5 6 7 