class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n1 = nums[nums.size()-1]*nums[nums.size()-2];
        int n2 = nums[0]*nums[1];
        return n1-n2;
    }
};