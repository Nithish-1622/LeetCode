class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int mG = 0;
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());

        for(int i = 1 ; i<nums.size(); i++){
        mG  = max(mG, nums[i]-nums[i-1]); 
        }
        return mG;

    }
};