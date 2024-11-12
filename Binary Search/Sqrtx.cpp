/*
Question:

You are given a sorted array of integers and a target integer Square. Write a C++ program that uses binary search to determine if there exists an element in the array whose square is equal to Square. 
If such an element exists, print the element as the square root of Square. If no such element exists, print -1.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Square ;
    cout<<"Enter the square number: ";
    cin>>Square;

    int L=0 ,  R= n-1;
    bool  found = false;
    while(L<=R){
        int mid = L + (R-L)/2;
        if(arr[mid]*arr[mid] == Square){
            cout<<"Square root of "<<Square<<" is "<<arr[mid]<<endl;
            found =true;
            break;
        }
        if(arr[mid]*arr[mid] >Square){
            R = mid-1;
        }
        else{
            L = mid + 1;
        }
    }
    if(!found){
        cout<<"-1"<<endl;
    }
    
    return 0;
}


// Enter the size of the array: 7
// Enter the elements of the array: 12 8 12 243 12 1 2
// Enter the square number: 64
// Square root of 64 is 8