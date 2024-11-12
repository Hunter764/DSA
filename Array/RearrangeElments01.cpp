// There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

//Brute force 


// Input:
// arr[] = {1,2,-4,-5}, N = 4
// Output:
// 1 -4 2 -5


// In this simple approach, since the number of positive and negative elements are the same, we put positives into an array called “pos” and negatives into an array called “neg”.
// After segregating each of the positive and negative elements, we start putting them alternatively back into array A.
// Since the array must begin with a positive number and the start index is 0, so all the positive numbers would be placed at even indices (2*i) and negatives at the odd indices (2*i+1), where i is the index of the pos or neg array while traversing them simultaneously.
// This approach uses O(N+N/2) of running time due to multiple traversals which we’ll try to optimize in the optimized approach given below.


#include<iostream>
#include<vector>
using namespace std;

vector<int>  RearrangebySign(vector<int>A, int n){
    // Define 2 vectors, one for storing positive 
  // and other for negative elements of the array.

  vector<int> pos;
  vector<int> neg;

// Segregate the array into positives and negatives.
  for(int i=0; i<n; i++){
    if(A[i]>0) pos.push_back(A[i]);
    else neg.push_back(A[i]);
  }
    // Positives on even indices, negatives on odd.

  for(int i=0; i<n/2; i++){

    A[2*i] = pos[i];
    A[2*i+1] = neg[i];
  }  
  return A;

}

int main(){

    int n;
    cout<<"Enter the size: ";
    cin>>n;

    vector<int> A(n);
    cout<<"Enter the array: ";
    for(int i=0; i<n;i++){
        cin>>A[i];
    }

    vector<int> ans = RearrangebySign(A,n);
        cout<<"After rearrangement: ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}


// Enter the size: 4
// Enter the array:  1 2 -4 -5
// After rearrangement: 1 -4 2 -5