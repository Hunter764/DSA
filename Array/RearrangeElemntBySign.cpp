//There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.
//optimal approach

// Input:
// arr[] = {1,2,-4,-5}, N = 4
// Output:
// 1 -4 2 -5

// In this optimal approach, we will try to solve the problem in a single pass and try to arrange the array elements in the correct order in that pass only.
// We know that the resultant array must start from a positive element so we initialize the positive index as 0 and negative index as 1 and start traversing the array such that whenever we see the first positive element, it occupies the space at 0 and then posIndex increases by 2 (alternate places).
// Similarly, when we encounter the first negative element, it occupies the position at index 1, and then each time we find a negative number, we put it on the negIndex and it increments by 2.
// When both the negIndex and posIndex exceed the size of the array, we see that the whole array is now rearranged alternatively according to the sign.



#include<iostream>
#include<vector>
using namespace std;

vector<int> RearrangeSign(vector <int> A){
    int n = A.size();

    vector<int> ans (n,0);

    int posIndex=0 , negIndex =1;
    for(int i=0; i<n; i++){

        if(A[i]<0){
            ans[negIndex] = A[i];
            negIndex += 2;
        }

        else{
            ans[posIndex] = A[i];
            posIndex +=2;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int> A(n);
    cout<<"Enter the array: ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    vector<int> ans = RearrangeSign(A);
    cout<<"After rearrangment: ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}


// Enter the size: 6
// Enter the array: 1 2 -4 -5 3 -2 
// After rearrangment: 1 -4 2 -5 3 -2    

// Time complexity: O(N)
// space comlexity: O(N) extra space used to  store the rearranged elements
