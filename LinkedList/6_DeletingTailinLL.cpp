#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

public:
    Node(int data1 , Node*next1 = nullptr){
        data = data1;
        next = next1;
    }

};

Node* convertArr2LL(vector<int> & arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1 ; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int LengthOfLL(Node * head){
    int cnt= 0;
    Node* temp = head;
    while(temp){
        temp = temp -> next;
        cnt++;
    }
    return cnt;
}

Node* removeHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<  temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

//removing tail 

Node * removeTail(Node* head){
    if(head == NULL || head->next == NULL)  return NULL;
    Node* temp = head ;
    while(temp->next->next != NULL){
        temp = temp ->next;
    }
    delete temp->next;
    temp -> next = nullptr;
    return head;
}

int main(){
    vector<int> arr = {2,3,4,5,6};
    Node * head = convertArr2LL(arr);
    head = removeTail(head);
    printList(head);
    
}

//output
//2 3 4 5 