class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int seq = nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i - 1] + 1)
                seq += nums[i];
            else
                break;
        }

        vector<bool> hT(1276, false);
        for(int num : nums)
            hT[num] = true;
        while(hT[seq])
            seq++;

        return seq;
    }
};