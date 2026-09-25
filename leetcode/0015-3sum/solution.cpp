class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<std::vector<int>> result;
        int n = nums.size();
        
        // 1. Sort the array to use the two-pointer technique
        std::sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate elements for the first position to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            // Optimization: If the smallest possible triplet sum > 0, no point in continuing
            if (nums[i] + nums[i + 1] + nums[i + 2] > 0) {
                break;
            }
            // Optimization: If the largest possible triplet sum with nums[i] < 0, move to next i
            if (nums[i] + nums[n - 2] + nums[n - 1] < 0) {
                continue;
            }

            int left = i + 1;
            int right = n - 1;
            
            // 2. Two-pointer search for the remaining two numbers
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicates for the second position
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    // Skip duplicates for the third position
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    // Move both pointers after recording the valid combination
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    left++; // Sum is too small, move left pointer rightward to increase the sum
                } 
                else {
                    right--; // Sum is too large, move right pointer leftward to decrease the sum
                }
            }
        }
        
        return result;
    }
};
