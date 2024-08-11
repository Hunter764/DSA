
//Delete Kth elemnt from the LL 

#include<iostream>
#include<vector>
using namespace std;



class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1=nullptr){
        data = data1;
        next = next1;
    }
};

    Node* convertArr2LL(vector<int> &arr){
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i=1 ;i <arr.size();i++){
             Node * temp = new Node(arr[i]);
             mover->next = temp;
             mover = temp;
        }
       return head;
    }

    int LengthOfLL(Node* head){
        int cnt = 0;
        Node* temp = head;
        while(temp){
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }

    void printList(Node* head){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    Node* removek(Node* head , int k){
        if(head == NULL) return head;
        if(k==1){
            Node* temp = head;
            head = head ->next;
            delete temp;
            return head;
        }
        int cnt =0 ;
        Node* temp = head;
        Node* prev = NULL;
        while(temp != NULL){
            cnt++;
            if(cnt == k){
                prev->next = prev->next->next;
                delete temp;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;        
    }
int main(){
    vector<int> arr = {12,5,6,8};
    Node* head = convertArr2LL(arr);
    head = removek(head,2); //remove second element
    cout<<"New list after deleting the second element: ";
    printList(head);
}

// New list after deleting the second element: 12 6 8