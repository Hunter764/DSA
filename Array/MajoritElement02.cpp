// Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array.

//Better Approach

// Use a hashmap and store as (key, value) pairs. (Can also use frequency array based on the size of nums) 
// Here the key will be the element of the array and the value will be the number of times it occurs. 
// Traverse the array and update the value of the key. Simultaneously check if the value is greater than the floor of N/2. 
// If yes, return the key 
// Else iterate forward.

#include<iostream>
#include<vector>
#include<map>
using namespace std;

int majorityElement(vector<int> v){
    int n = v.size();

    map<int,int> mpp;

    for(int i=0; i<n; i++){
        mpp[v[i]]++;
    }

    for(auto it:mpp){
        if(it.second >(n/2)){
            return it.first;
        }
    }
    return -1;


}


int main(){
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout<<"The majority elemnt is: "<<ans<<endl;
    return 0;
}

// The majority elemnt is: 2


// Time Complexity: O(N*logN) + O(N), where N = size of the given array.
// Reason: We are using a map data structure. Insertion in the map takes logN time. And we are doing it for N elements. So, it results in the first term O(N*logN). The second O(N) is for checking which element occurs more than floor(N/2) times. If we use unordered_map instead, the first term will be O(N) for the best and average case and for the worst case, it will be O(N2).

// Space Complexity: O(N) as we are using a map data structure.