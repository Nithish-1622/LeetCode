class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int c = accounts[0].size();
        int r = accounts.size();
        int max_cus = INT_MIN;
        for(int i=0;i<r;i++){
            int s = 0;
            for(int j=0;j<c;j++){
                s += accounts[i][j];
            }
            max_cus = max(max_cus,s);
        }
        return max_cus;
    }
};