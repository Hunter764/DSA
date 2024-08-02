#include<iostream>
using namespace std;

int search(int arr[], int n, int num) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int num;
    cout << "Enter the number to search for: ";
    cin >> num;

    int val = search(arr, n, num);
    if (val != -1) {
        cout << "Element found at index: " << val << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
