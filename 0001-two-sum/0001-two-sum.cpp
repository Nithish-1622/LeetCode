class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.size()-1;
        int v1 = 0, v2 = 0; 
        while(l<r){
            if(nums[l]+nums[r] == target) {
                v1 = nums[l];
                v2 = nums[r];
                break;
            }
            else if( nums[l] + nums[r]> target){
                r--;
            }
            else {
                l++;
            }
        }
        int idx1 = -1, idx2 = -1;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == v1 && idx1 == -1) {
                idx1 = i;
            } else if (temp[i] == v2 && idx2 == -1) {
                idx2 = i;
            }
        }

        return {idx1, idx2};
    }
};