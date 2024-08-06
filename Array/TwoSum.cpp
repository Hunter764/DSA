//Using two pointers

#include<iostream>
#include<vector>
#include<string>
using namespace std;

string twoSum(int n , vector<int> &arr, int target){
    sort(arr.begin(), arr.end());
    int left=0  , right =n-1;
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return "YES";
        }
        else if(sum < target){
            left++;
        }
        else right--;
    }
    return "NO";
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector <int> arr(n);
    cout<<"Enter the numbers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target value: ";
    cin>>target;

    string ans = twoSum(n,arr,target);
    cout<<ans<<endl;

      return 0;

}

//output
// Enter the size of the array: 5
// Enter the numbers: 2 6 5 8 11
// Enter the target value: 14
// YES