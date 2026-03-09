class Solution {
public:
    int minOperations(vector<int>& nums) {
        int c = 0;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                continue;
            }
            else{
                int diff = (nums[i]+1)-(nums[i+1]);
                nums[i+1] += diff;
                c+=diff;
            }
        }
        return c;
    }
};