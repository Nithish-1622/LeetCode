class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxSum = 0;
        double window = 0;
        for (int i=0;i<k;i++){
            window+=nums[i];
        }
        maxSum = window;
        for(int i=k;i<n;i++){
            window+=nums[i]-nums[i-k];
            maxSum = max(window,maxSum);
        }
        double avg = maxSum/k;
        return avg;
    }
};