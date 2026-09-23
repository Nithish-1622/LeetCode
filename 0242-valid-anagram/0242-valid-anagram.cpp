class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<int,int> mp;
        for(int i: s){
            mp[i]++;
        }
        for(int j:t){
            mp[j]--;
        }
        for(auto x  : mp){
            if(x.second != 0){
                return false;
            }
        }
        return true;

    }
};