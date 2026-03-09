class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int c = 0;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            int lsum = 0;
            int rsum =0;
            for(int j=0;j<=i;j++){
                lsum+=nums[j];
            }
            for(int k=i+1;k<n;k++){
                rsum+=nums[k];
            }
          
            if((lsum-rsum)%2==0) c++;
        }
        return c;
    }
};