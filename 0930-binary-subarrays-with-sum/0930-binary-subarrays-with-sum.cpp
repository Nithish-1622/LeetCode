class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int totalCount = 0;
        int currentSum = 0;
        unordered_map<int, int> freq; // To store the frequency of prefix sums

        for (int num : nums) {
            currentSum += num;
            if (currentSum == goal){
                totalCount++;
            }
            if (freq.find(currentSum - goal) != freq.end()){
                totalCount += freq[currentSum - goal];
            }

            freq[currentSum]++;
        }

        return totalCount;
    }
};