class Solution {
public:
    int maxProduct(int n) {
        vector<int> nums;
        while(n>0){
            int a = n%10;
            nums.push_back(a);
            n /= 10;
        }
        sort(nums.begin(),nums.end());
        int n1 = nums.size();
        return (nums[n1-1]*nums[n1-2]);

    }
};