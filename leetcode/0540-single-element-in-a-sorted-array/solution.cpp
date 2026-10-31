class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int high=nums.size()-1;
        int low=0;
        while(low<high){
            int mid = low + (high - low) / 2;
 
            /* Move to the first index of the expected pair.*/
            if (mid % 2 == 1) {
                mid--;
            }
            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            } else {
                high = mid;
            }
        }
 
        return nums[low];
    }
};
