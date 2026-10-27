class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int res = nums[0];
        int curMax = nums[0];
        int curMin = nums[0];

        for (int i = 1; i < n; i++) {
            // If the current number is negative, curMax and curMin swap roles
            if (nums[i] < 0) {
                swap(curMax, curMin);
            }

            // Either extend the previous subarray product or start fresh at nums[i]
            curMax = max(nums[i], curMax * nums[i]);
            curMin = min(nums[i], curMin * nums[i]);

            res = max(res, curMax);
        }

        return res;
    }
};
