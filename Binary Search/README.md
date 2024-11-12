
# Binary Search (C++ )

Binary search is a fundamental algorithm that allows quick searches in sorted collections, such as arrays or dictionaries. It’s simple but tricky to implement correctly, with common pitfalls including overflow errors and incorrect mid-point calculations.

## Key Concepts of Binary Search

Binary search repeatedly divides the search range in half, checking if the middle element is the target value. If it is, the algorithm terminates; otherwise, it searches in the remaining half, depending on whether the target is greater or smaller than the mid-point.

Example: For an array a = [1, 3, 5, 7, 10, 15, 20], with a target value 10:

Calculate the middle element.
1. If a[mid] equals the target, return mid.
2. If a[mid] is less than the target, continue with the right half.
3. If a[mid] is greater, continue with the left half.


## Visualise

https://youtu.be/eVuPCG5eIr4?si=V0NVa7Z00QyvGbn9



## Implementation

### c++ code

```bash
  int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Safe from overflow
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;  // Target not found
}

```

### Python code
``` bash
    def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = left + (right - left) // 2  # Safe from overflow
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1  # Target not found

```

## Common Errors

    Overflow: Avoid mid = (L + R) / 2 as it might cause overflow. Instead, use mid = L + (R - L) / 2.

    Empty Range: Binary search terminates when Left > Right, indicating the target is not present.


## Advanced Binary Search Use Cases

1. Square Root Calculation without sqrt() Function:

    Use binary search on integers to approximate the square root of a number.
    Define the range [0, X] and check M^2 against X to find the closest value.

2. Finding the First or Last Occurrence of a Condition:

    When searching for the first or last element that meets a condition (e.g., >= target), introduce an ans variable to store potential results.
    Example: Searching for the first element greater than or equal to X.

### C++ Code for Finding First Element >= X

``` bash
    int lowerBound(vector<int>& arr, int X) {
    int left = 0, right = arr.size() - 1;
    int ans = -1;  // Default if no element >= X
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= X) {
            ans = mid;  // Potential answer
            right = mid - 1;  // Continue search in left half
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

```

3. Binary Search in Rotated Sorted Array:

    To find the smallest element in a rotated array, apply binary search with additional conditions.
    Example: Identify if mid-element is greater than the first element to determine rotation.

## Python Code for Rotated Array Minimum

``` bash
    def find_min_in_rotated(arr):
    left, right = 0, len(arr) - 1
    while left < right:
        mid = left + (right - left) // 2
        if arr[mid] > arr[right]:  # Minimum in right half
            left = mid + 1
        else:  # Minimum in left half
            right = mid
    return arr[left]  # Minimum element

```

## Time Complexity
    Binary search operates in O(log N) time due to its halving approach. Each step reduces the problem size by half, making it highly efficient for large datasets.

