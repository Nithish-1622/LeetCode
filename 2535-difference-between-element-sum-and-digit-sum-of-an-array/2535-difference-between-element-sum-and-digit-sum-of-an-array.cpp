class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_sum = 0;
        int digit_sum = 0;
        for(int i=0;i<nums.size();i++){
            element_sum+=nums[i];
            while(nums[i]>0){
                digit_sum+=nums[i]%10;
                nums[i]/=10;
            }
        }
        int result = element_sum-digit_sum;
        if (result<0) result = result*-1;
        return result;
    }
};