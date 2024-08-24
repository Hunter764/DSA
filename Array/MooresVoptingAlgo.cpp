// Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. You may consider that such an element always exists in the array.
#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> v){

    int n =v.size();
    int cnt = 0;
    int el;

    for(int i=0; i<n; i++){
        if(cnt ==0){
            cnt = 1;
            el = v[i];
        }
        else if(el == v[i]) cnt++;
        else cnt--;
    }

    int cnt1 =0;
    for(int i=0; i<n; i++){
        if(v[i] == el) cnt1++;
    }
    if(cnt>(n/2)) return el;
        return -1;
}

int main(){
    vector<int> arr ={2,2,1,1,2,2};
    int ans = majorityElement(arr);
    cout<<"The majority element is:"<<ans<<endl;
    return 0;
}

//The majority element is:-1

// Time Complexity: O(N) + O(N), where N = size of the given array.
// Reason: The first O(N) is to calculate the count and find the expected majority element. The second one is to check if the expected element is the majority one or not.

//Note: If the question states that the array must contain a majority element, in that case, we do not need the second check. Then the time complexity will boil down to O(N).

//Space Complexity: O(1) as we are not using any extra space.