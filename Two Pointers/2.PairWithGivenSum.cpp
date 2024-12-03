/*You are given an integer k and an array arr[]. You have to find numbers of pairs in array arr[] which sums up to k. 
It is given that the elements of the array arr[] are distinct and in sorted order.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countPair(int k, vector<int>& arr) {
        sort(arr.begin(), arr.end()); // Sort the array
        int n = arr.size();
        int p1 = 0, p2 = n - 1;
        long ans = 0;

        while (p1 < p2) {
            int sum = arr[p1] + arr[p2];
            if (sum > k) {
                p2--; // Move the right pointer left
            } else if (sum < k) {
                p1++; // Move the left pointer right
            } else { // sum == k
                if (arr[p1] != arr[p2]) {
                    int cl = 1, cr = 1;
                    // Count occurrences of arr[p1]
                    while (p1 + 1 < p2 && arr[p1] == arr[p1 + 1]) {
                        cl++;
                        p1++;
                    }
                    // Count occurrences of arr[p2]
                    while (p2 - 1 > p1 && arr[p2] == arr[p2 - 1]) {
                        cr++;
                        p2--;
                    }
                    ans += cl * cr; // Total pairs
                    p1++;
                    p2--;
                } else { // arr[p1] == arr[p2]
                    long count = p2 - p1 + 1;
                    ans += (count * (count - 1)) / 2; // Choose 2 from count
                    break;
                }
            }
        }

        return ans;
    }
};

int main() {
    Solution solution;
    int k, n;

    // Input target sum and array size
    cin >> k >> n;
    vector<int> arr(n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the function and print the result
    cout << solution.countPair(k, arr) << endl;

    return 0;
}


// 8 5
// 1 2 3 5 5
// 2


// TC :- 0(nlogn)
// Sc:- O(1)