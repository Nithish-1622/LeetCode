class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> nums1;
        
        for(int i: nums){
            int r = 0;
            while(i){
                r += i%10;
                i/=10;
            }
            nums1.push_back(r);
        }
        sort(nums1.begin(),nums1.end());
        return nums1[0];
    }
};