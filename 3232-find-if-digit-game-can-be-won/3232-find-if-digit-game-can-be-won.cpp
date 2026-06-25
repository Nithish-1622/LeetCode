class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        long int s = 0;
        long int d = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] <= 9) {
                s += nums[i];
            } else {
                d += nums[i];
            }
        }

        if (s == d) return false;
        else return true;
    }
};