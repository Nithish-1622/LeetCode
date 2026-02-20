class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> r;

        int total = 1 << n;   
        for(int i = 0; i < total; i++) {
            vector<int> subset;
            for(int j = 0; j < n; j++) {
                if(i & (1 << j)) {
                    subset.push_back(nums[j]);
                }
            }

            r.push_back(subset);
        }

        return r;
    
    }
};