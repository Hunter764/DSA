#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
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

int main() {
    vector<int> arr = {12, 4, 5, 6, 7};
    Node* head = convertArr2LL(arr);
    cout << "Length of the LL: "<<LengthOfLL(head) << endl; // Prints the length of the linked list
    cout << "Element is present: "<<checkIfPresent(head, 12) << endl;  // Prints 1 if 12 is present, otherwise 0
    
    return 0;
}

// Length of the LL: 5
// Element is present: 1