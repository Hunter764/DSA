// Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array.

//Brute Force approach

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> & arr){

    int n= arr.size();
    for(int i=0; i<n; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            if(arr[j] == arr[i]){
                cnt++;
            }
        }
        if(cnt > (n/2)){
            return arr[i];
        }
    }
}

int main(){
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout<<"The majority elemnt is: "<<ans<<endl;
    return 0;
}


// The majority elemnt is: 2
// TC:- O(N^2)
// SC:- O(1)
