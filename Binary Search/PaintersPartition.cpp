#include <iostream>
#include <algorithm> // For std::max_element

bool check(int N, int W, int* C, int n3, int m) {
    int p = 1, sum = 0;
    for (int i = 0; i < n3; i++) {
        if (C[i] > m) {
            return false; // Single job exceeds limit
        }
        if (sum + C[i] > m) {
            p++; // New partition
            sum = C[i];
        } else {
            sum += C[i];
        }
        if (p > W) {
            return false; // Too many partitions
        }
    }
    return true;
}

int paint(int N, int W, int* C, int n3) {
    int low = *std::max_element(C, C + n3);
    int sum = 0;
    for (int i = 0; i < n3; i++) {
        sum += C[i];
    }
    int high = sum;
    int ans = high;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (check(N, W, C, n3, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

// Example usage
int main() {
    int N = 5;  // Number of elements
    int W = 2;  // Number of workers
    int C[] = {10, 20, 30, 40, 50}; // Jobs
    int n3 = sizeof(C) / sizeof(C[0]);

    std::cout << "Minimum time to paint: " << paint(N, W, C, n3) << std::endl;
    return 0;
}
