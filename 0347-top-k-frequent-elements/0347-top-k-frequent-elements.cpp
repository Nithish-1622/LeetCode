class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto x:nums ){
            mp[x]++;
        }
        map<int ,vector<int>> m;
        for(auto x : mp){
            int cur = x.first;
            int freq = x.second;
            m[freq].push_back(cur);
        }
        vector<int> ans;
        for(auto it = m.rbegin(); it!=m.rend();it++){
            for(int i : it->second){
                ans.push_back(i);
                if(ans.size() == k){
                    return ans;
                }
            }
        }
        return ans;
    }
};