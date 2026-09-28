class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        vector<int> run(n,0);
        run[0] = nums[0];
        for (int i=1;i<n;i++){
            run[i] = run[i-1]+nums[i];
        }
    return run;
    }
};