//There’s an array ‘A’ of size ‘N’ with positive and negative elements (not necessarily equal). 
//Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values. 
//The leftover elements should be placed at the very end in the same order as in array A.


// Input:
// arr[] = {1,2,-4,-5,3,4}, N = 6
// Output:
// 1 -4 2 -5 3 4

// Explanation: 

// Positive elements = 1,2
// Negative elements = -4,-5
// To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.
// Leftover positive elements are 3 and 4 which are then placed at the end of the array.

#include<iostream>
#include<vector>
using namespace std;

vector<int> RearrangebySign(vector<int>A, int n){
    
  // Define 2 vectors, one for storing positive 
  // and other for negative elements of the array.
  vector<int> pos;
  vector<int> neg;
  
  // Segregate the array into positives and negatives.
  for(int i=0;i<n;i++){
      
      if(A[i]>0) pos.push_back(A[i]);
      else neg.push_back(A[i]);
  }
  
  // If positives are lesser than the negatives.
  if(pos.size() < neg.size()){
      
    // First, fill array alternatively till the point 
    // where positives and negatives ar equal in number.
    for(int i=0;i<pos.size();i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
    }
    
    // Fill the remaining negatives at the end of the array.
    int index = pos.size()*2;
    for(int i = pos.size();i<neg.size();i++){
        
        A[index] = neg[i];
        index++;
    }
  }
  
  // If negatives are lesser than the positives.
  else{
      
      // First, fill array alternatively till the point 
      // where positives and negatives ar equal in number.
      for(int i=0;i<neg.size();i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
  }
    
    // Fill the remaining positives at the end of the array.
    int index = neg.size()*2;
    for(int i = neg.size();i<pos.size();i++){
        
        A[index] = pos[i];
        index++;
    }
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

// Enter the size: 6
// Enter the array: 1 2 -4 -5 3 4
// After rearrangement: 1 -4 2 -5 3 4

// Time Complexity: O(2*N) 
//Space Complexity:  O(N/2 + N/2) = O(N) 