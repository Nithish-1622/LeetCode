class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        int maxLength = 0;
        for (auto&  p: mp) {
            if (mp.count(p.first + 1)) {
                int currentLength = p.second + mp[p.first + 1];
                maxLength = max(maxLength, currentLength);
            }
        }

        return maxLength;
    }
};