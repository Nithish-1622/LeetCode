class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int l = lower_bound(nums.begin(),nums.end(),0)-nums.begin();
        int r = upper_bound(nums.begin(),nums.end(),0)-nums.begin();
        int m = max(l,n-r);
        return m;
    }
};