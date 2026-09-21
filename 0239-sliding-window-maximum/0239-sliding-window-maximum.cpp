class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k == 1)  return nums;
    vector<int> ans;
    int maxi = INT_MIN, n = nums.size();
    for(int i = 0;i < k; i++){
        maxi = max(maxi, nums[i]);
    }
    ans.push_back(maxi);
    //sliding the window now 
    for(int r = 1; r <= n - k; r++){
        if(nums[r + k - 1] > maxi){
            maxi = nums[r + k - 1];
            ans.push_back(maxi);
            continue;
        }
        if(nums[r] == maxi) {
            ans.push_back(maxi);
            continue;
        } 
        if(nums[r - 1] == maxi) {
            maxi = INT_MIN;
            for(int j = 0; j < k; j++) {
                maxi = max(maxi, nums[r+j]);
            }
            ans.push_back(maxi);
        } else {
            ans.push_back(maxi);
        }
    }
        return ans;
    }
};