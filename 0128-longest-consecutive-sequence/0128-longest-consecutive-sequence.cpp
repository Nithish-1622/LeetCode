class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int c = 0;
        for(int x: nums){
            st.insert(x);
        }
        int longest = 0;
        for (int n : st) {
            if (st.find(n - 1) == st.end()) {
                int length = 1;
                while (st.find(n + length) != st.end()) {
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;


    }
};