class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        auto lb = lower_bound(nums.begin(),nums.end(),target);
        auto rb = upper_bound(nums.begin(),nums.end(),target);
        if (lb == nums.end() || *lb != target) {
            return {-1, -1};
        }
        int l = lb - nums.begin();
        int r  = rb - nums.begin();
        return {l  , r-1};
        
    }
};