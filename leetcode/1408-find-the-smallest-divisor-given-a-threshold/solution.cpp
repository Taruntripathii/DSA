#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool canDivideWithinThreshold(vector<int>& nums, int divisor, int threshold) {
        int total = 0;

        for (int num : nums) {
            total += (num + divisor - 1) / divisor;
            if (total > threshold) {
                return false;
            }
        }
        return total <= threshold;
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long totalSum = 0;
        int high = 0;

        for (int num : nums) {
            totalSum += num;
            high = max(high, num);
        }
        if (threshold >= totalSum) {
            return 1;
        }
        if (threshold == static_cast<int>(nums.size())) {
            return high;
        }
        int low = 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (canDivideWithinThreshold(nums, mid, threshold)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
