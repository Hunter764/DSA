//Find first value >= X(where X is a input value)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0 ;i<n; i++){
        cin>>arr[i];
    }

    int L=0 , R=n-1 , X;
    cout<<"Enter value of X: ";
    cin>>X;
    
    int ans = -1 ;//fake value;
    while(L<=R){
        int mid = L + (R-L)/2;
        if(arr[mid]>X){
            ans = mid;
            R = mid-1;
        }
        else{
            L = mid+1;
        }
    }
    cout<<"First element greater than or equal to "<<X<<" is at index "<<ans;
    return  0;
    
}


// Enter the size of the array: 7
// Enter the elements of the array: 1 2 3 4 5 6 7
// Enter value of X: 4