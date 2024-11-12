#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element: ";
    cin>>target;
    int L=0 , R= n-1;
    while(L<=R){
        int mid = L +(R-L)/2;
        if(arr[mid] == target){
            cout<<"Index of the target element: "<<mid<<endl;
            return 0;
        }
        if(arr[mid] < target){
            L =mid + 1;
            
        }
        else {
            R = mid -1;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}

// Enter the size of array: 7
// Enter the array: 1 2 3 4 5 6 7
// Enter the target element: 6
// Index of the target element: 5