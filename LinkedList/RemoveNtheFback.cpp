#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

void printLL(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* deleteNthNodefromEnd(Node* head, int N) {
    if (head == nullptr) return nullptr;

    // Get the length of LL
    Node* temp = head;
    int cnt = 0;
    while (temp != nullptr) {
        cnt++;
        temp = temp->next;
    }

    // Handle the case where we remove the head
    if (cnt == N) {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    // Traverse to the (cnt-N)th node
    temp = head;
    int res = cnt - N - 1;  // Stop at the node before the one to be deleted
    while (res > 0) {
        temp = temp->next;
        res--;
    }

    // Delete the nth node from the end
    Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;

    return head;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int N = 3;

    // Construct the linked list from the array
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (size_t i = 1; i < arr.size(); ++i) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    // Delete the N-th node from the end
    head = deleteNthNodefromEnd(head, N);

    // Print the resulting linked list
    printLL(head);

    return 0;
}
