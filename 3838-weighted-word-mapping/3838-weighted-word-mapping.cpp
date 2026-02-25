class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;
        for(auto s:words){
            int c = 0;
            for(int i=0;i<s.size();i++){
                c += weights[(s[i]-'a')];
            }
            ans+=('a'+(25-(c%26)));
        }
        return ans;
    }
};