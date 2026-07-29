class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP = INT_MIN;
        int p = 1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                p = (nums[i]-1)*(nums[j]-1);
                maxP = max(maxP, p);
            }
        }
        return maxP;
    }
};