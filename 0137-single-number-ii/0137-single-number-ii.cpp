class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = 0;
        for(int bit = 31 ; bit>=0 ; bit--){
            int c = 0;
            for(int i=0 ; i<nums.size();i++){
                if(nums[i] & (1<<bit))
                    c++;
            }
            if(c%3!=0){
                n |= (1<<bit);
            }
        }
        return n;
    }
};