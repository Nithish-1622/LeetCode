class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](int a,int b)
             {
                 return llabs((long long)a) > llabs((long long)b);
             });

        int n = nums.size();
        int k = (n+1)/2;
        
        long long psum=0,nsum=0;
        for(int i=0;i<n;i++)
            {
                long long sq = nums[i]*nums[i];

                if(i<k)psum+=sq;
                else nsum+=sq;
            }
        return psum-nsum;
    }
};