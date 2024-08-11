#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1=nullptr) {
        data = data1;
        next = next1;
    }

   
};

Node* convertArr2LL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int LengthOfLL(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while(temp) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int checkIfPresent(Node* head, int value) {
    Node* temp = head;
    while(temp) {
        if(temp->data == value) return 1;
        temp = temp->next;
    }
    return 0;  // Return 0 if the value is not found
}

Node* removeHead(Node* head) {
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 4, 5, 6, 7};
    Node* head = convertArr2LL(arr);
    head = removeHead(head);
    printList(head);  // Print the linked list after deletion
    return 0;
}

//output
//4 5 6 7 
