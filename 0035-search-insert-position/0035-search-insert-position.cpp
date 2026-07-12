class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int ans = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        return ans;

    }
};