class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        const int n = nums.size();
        vector<long long> p(n);
        for (int i = 1; i < n; ++i) {
            p[i] = p[i - 1] + nums[i - 1];
        }
        long long v = 1;
        int r = -1;
        for (int i = n - 1;; --i) {
            if (p[i] == v) {
                r = i;
            }
            if (i == 0 || v > p[i - 1] / nums[i]) break;
            v *= nums[i];
        }
        return r;
    }
};