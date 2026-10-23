class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mpl;
        for (auto x : nums){
            if(mpl.count(x)){
                return true;
            }
            mpl.insert(x);
        }
        return false;
    }

};