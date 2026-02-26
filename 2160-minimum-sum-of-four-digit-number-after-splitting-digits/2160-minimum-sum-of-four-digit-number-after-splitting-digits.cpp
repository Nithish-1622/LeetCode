class Solution {
public:
    int minimumSum(int num) {
        string nums=to_string(num);
        sort(nums.begin(),nums.end());
        int a=(nums[0]-'0')*10+nums[2]-'0';
        int b=(nums[1]-'0')*10+nums[3]-'0';
        return a+b;
    }
};