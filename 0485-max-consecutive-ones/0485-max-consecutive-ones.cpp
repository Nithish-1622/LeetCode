class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0;
        int mac = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]){
                c++;
                mac = max(mac,c);
            }else{
                c = 0;
            }
        }
        return mac;
    }
};