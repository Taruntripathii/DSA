class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int seqsum=1;
        int prevalue=nums[0];
            int currsum=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==prevalue){
                continue;
            }
            else if(nums[i]==prevalue+1){
                currsum++;
            }
            else{
                currsum=1;
            }
            prevalue=nums[i];
            seqsum=max(seqsum,currsum);
        }
        return seqsum;
    }
};
