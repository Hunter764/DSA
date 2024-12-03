/*Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (k < 0) return 0; // If k is negative, return 0 as no valid pairs can exist.

        sort(nums.begin(), nums.end()); // Sort the array to use the two-pointer technique
        int p1 = 0, p2 = 1, count = 0;
        int n = nums.size();

        while (p2 < n) {
            int diff = nums[p2] - nums[p1]; // Calculate the difference between the elements

            if (diff == k) { // If the difference is equal to k
                count++;
                p1++;
                p2++;
                // Skip duplicates for both pointers
                while (p1 < n && nums[p1] == nums[p1 - 1]) p1++;
                while (p2 < n && nums[p2] == nums[p2 - 1]) p2++;
            } else if (diff < k) {
                p2++; // Increase p2 if the difference is less than k
            } else {
                p1++; // Increase p1 if the difference is greater than k
            }

            // Ensure p1 and p2 don't overlap
            if (p1 == p2) p2++;
        }

        return count;
    }
};

int main() {
    Solution solution;
    vector<int> nums;
    int k;

    // Input for testing
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;
    nums.resize(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;

    // Call the function and display the result
    int result = solution.findPairs(nums, k);
    cout << "Number of unique k-diff pairs: " << result << endl;

    return 0;
}


// Enter the number of elements in the array: 5
// Enter the elements of the array: 3 1 4 1 5
// Enter the value of k: 2

// Number of unique k-diff pairs: 2
