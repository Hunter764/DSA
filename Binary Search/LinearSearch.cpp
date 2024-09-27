#include<bits/stdc++.h>
using namespace std;

int search(const vector<int> &arr , int num ,int n){
    for(int i=0; i<n; i++){
        if(arr[i] == num){
            return  i;  // returning the index if found
        }
    }
    return -1;  //If num is not found
}


int  main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> arr(n) ;
    cout<<"Enter the input array: ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter the number to find in the array: ";
    cin>>num;
    
    int target = search (arr , num , n);

    if(target != -1){
        cout<<"Number found at index: "<<target<<endl;
    }
    else{
      cout<<"Number is not found:"<<endl;
    }
    return  0;
    
}


// Enter the size of the array: 5
// Enter the input array: 1 2 3 4 5
// Enter the number to find in the array: 5
// Number found at index: 4