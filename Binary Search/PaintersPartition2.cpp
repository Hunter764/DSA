#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define MOD 10000003

// Helper function to check if it is possible to paint all boards within the given time limit
bool isPossible(int painters, const std::vector<int>& boards, int maxTime) {
    int painterCount = 1, currentTime = 0;

    for (int length : boards) {
        if (length > maxTime) {
            return false; // Single job exceeds max time
        }
        if (currentTime + length > maxTime) {
            painterCount++; // Assign new painter
            currentTime = length;
            if (painterCount > painters) {
                return false; // Too many painters required
            }
        } else {
            currentTime += length;
        }
    }
    return true;
}

// Main function to calculate the minimum time to paint all boards
int paint(int A, int B, std::vector<int>& C) {
    int n = C.size();

    // Find the maximum board length and total sum of board lengths
    int low = 0, high = 0;
    for (int length : C) {
        low = std::max(low, length);
        high = (high + length) % MOD;
    }

    int result = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(A, C, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    // Multiply the result by B (time per unit of length) at the end to avoid overflow
    return (1LL * result * B) % MOD;
}

int main() {
    int A, B, n;
    std::cout << "Enter the number of painters: ";
    std::cin >> A;
    std::cout << "Enter the time per unit length: ";
    std::cin >> B;
    std::cout << "Enter the number of boards: ";
    std::cin >> n;

    std::vector<int> C(n);
    std::cout << "Enter the lengths of the boards: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> C[i];
    }

    int result = paint(A, B, C);
    std::cout << "The minimum time required to paint all boards is: " << result << std::endl;

    return 0;
}
