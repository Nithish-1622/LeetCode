
class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        const int n = nums.size();
        int r = -1, left = 0, right = n - 1;
        while (left <= right) {
            const int mid = (left + right) >> 1;
            long long s= 0;
            
            for (int i = 0; i < mid; ++i) {
                s += nums[i];
            }
            __int128 p = 1;
            for (int i = mid + 1; i < n && p <= s; ++i) {
                p *= nums[i];
            }
            if (s == p) {
                r = mid;
            }
            if (s >= p) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return r;
        
    }
};