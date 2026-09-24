class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ri;

        for (int j = 0; j < numRows; j++) {
            vector<int> temp;
            long long ans = 1;

            for (int i = 0; i <= j; i++) {
                temp.push_back(ans);

                ans = ans * (j - i) / (i + 1);
            }

            ri.push_back(temp);
        }

        return ri;
    }
};
