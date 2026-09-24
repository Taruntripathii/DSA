class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ri;
        long ans=1;
        ri.push_back(ans);
        for(long i=1;i<rowIndex+1;i++){
            ans=ans*(rowIndex+1-i);
            ans=ans/(i);
            ri.push_back(ans);
        }
        return ri;
    }
};
