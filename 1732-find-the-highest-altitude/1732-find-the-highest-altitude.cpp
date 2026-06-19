class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int cur = 0;
        int high = cur;
        for(int x: gain){
            cur += x;
            high = max(high,cur);
        }
        return high;
    }
};