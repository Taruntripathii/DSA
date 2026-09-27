class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mx){
                mx=nums[i];
            }
            if(nums[i]<mn){
                mn=nums[i];
            }
        }
        while (mn != 0) {
            int rem = mx % mn;
            mx = mn;
            mn = rem;
        }

        return mx;
    }
};
