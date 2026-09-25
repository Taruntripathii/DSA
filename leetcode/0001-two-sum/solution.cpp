class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement exists in the map
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i}; // Match found, return indices
            }
            
            // Store the current number and its index in the map
            seen[nums[i]] = i;
        }
        
        return {}; // Return empty vector if no solution is found (though LeetCode guarantees one)
    }
};
