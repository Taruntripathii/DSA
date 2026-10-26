class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=m*m;
        vector<int> freq(n+1, 0);
        for (const auto& row : grid) {
            for (int val : row) {
            freq[val]++;}
        }
        int repeating = -1;
        int missing = -1;
        for(int value=1;value<=n;value++){
            if(freq[value]==2){
                repeating=value;
            }
            else if(freq[value]==0){
                missing=value;
            }
            if (repeating != -1 && missing != -1) {
                break;
            }
        }
        return{repeating,missing} ;
    }
};
