class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        int rb = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        int l = 0, r = nums.size()-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid]==target) return {lb,rb-1};
            else if(nums[mid]<target) l = mid+1;
            else r = mid-1;
        }
        return {-1,-1};
        
    }
};