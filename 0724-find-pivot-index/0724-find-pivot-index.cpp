class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tot = accumulate(nums.begin(), nums.end(),0);
        int l = 0;
        for(int i=0;i<nums.size();i++){
            int r = tot-l-nums[i];
            if(r==l){
                return i;
            }
            l+=nums[i];
        }
        return -1;
    }
};