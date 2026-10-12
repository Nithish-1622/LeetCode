class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int x : nums){
            mp[x]++;
        }
        vector<vector<int>> bucky( nums.size()+1);
        for(auto &[ele , freq] : mp){
            bucky[freq].push_back(ele);
        }
        for(int f=nums.size(); f>=1; f--){
            for(int element: bucky[f]){
                ans.push_back(element);
                if (ans.size()==k) return ans;
            }
        }
        return ans;
    } 
};