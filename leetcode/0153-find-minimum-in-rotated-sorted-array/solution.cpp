class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = (int)nums.size() - 1;
        int ans = INT_MAX;
        while(low<=high){

            int mid=low+(high-low)/2;
            if(nums[low]<=nums[mid]){
                ans=min(nums[low],ans);
                low=mid+1;
            }
            if(nums[mid]<=nums[high]){
                ans=min(nums[mid],ans);
                high=mid-1;
            }
        }
        return ans;
    }
};
