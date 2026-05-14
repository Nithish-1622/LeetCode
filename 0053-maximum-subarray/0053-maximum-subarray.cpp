class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_no, cur, n;
        max_no = nums[0];
        cur = nums[0];
        n = nums.size();
        for(int i=1;i<n;i++){
            cur = max(nums[i],cur+nums[i]);
            max_no = max(max_no,cur);
        }
        return max_no;
    }
};