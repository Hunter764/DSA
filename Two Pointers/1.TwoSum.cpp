/*Given an array arr[] of positive integers and another integer target.
 Determine whether two elements exist in the array whose sum is exactly target or not.
Return a boolean value true if two elements exist in arr[] else return false.*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool twoSum(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end()); // Sort the array
        int p1 = 0, p2 = arr.size() - 1;

        while (p1 < p2) {
            int sum = arr[p1] + arr[p2];
            if (sum == target) {
                return true; // Pair found
            } else if (sum < target) {
                p1++; // Move left pointer forward
            } else {
                p2--; // Move right pointer backward
            }
        }

        return false; // No pair found
    }
};

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int target, n;
        cin >> target >> n; // Target sum and size of the array

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Input array elements
        }

        Solution solution;
        cout << (solution.twoSum(arr, target) ? "true" : "false") << endl;
    }

    return 0;
}

// 2
// 9 4
// 2 7 11 15
// 10 5
// 1 2 3 4 5
// true
// false


//TC: - O(n log n) due to sorting