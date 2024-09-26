//Brute Force approach


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

Node* findMiddleNode(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    int middlenode = count/2 + 1;
    temp = head ;
    while(temp != NULL){
        middlenode = middlenode - 1;
        if(middlenode == 0){
            break;
        }
        temp = temp->next;
    }
    return temp;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);

    Node* middlenode = findMiddleNode(head);
    cout<<"Value of middle Node:"<<middlenode->data<<endl;

    return 0;
}
// Value of middle Node:4
// T.C  O(N)
// S.C O(1)