// Sort an array of 0s, 1s and 2s (better Approach)

#include<iostream>
#include<vector>
using namespace std;

void sortArray(vector <int> &arr, int n){

    int cnt0 =0, cnt1=0, cnt2=0;

    // Count the number of 0s, 1s, and 2s
    for(int i=0; i<n; i++){
        if(arr[i]==0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }

    // Update the array with sorted 0s, 1s, and 2s
    for(int i=0; i< cnt0 ; i++) arr[i] =0;
    for(int i=cnt0; i< cnt0 + cnt1; i++) arr[i]=1;
    for(int i=cnt0 + cnt1; i<n ;i++) arr[i] = 2;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sortArray(arr,n);
    cout<<"After Sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


// Enter the size of the array: 6
// Enter the array: 0 1 2 0 1 2
// After Sorting:0 0 1 1 2 2 


TC:- O(N) + O(N)