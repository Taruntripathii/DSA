class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int answer=nums.size();
        int high=(int)nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                answer=mid;
                break;
            }
            else if(nums[mid]>target){
                answer=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return answer;
    }
};
