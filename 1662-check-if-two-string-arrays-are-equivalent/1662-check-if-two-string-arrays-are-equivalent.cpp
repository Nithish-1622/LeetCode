class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string v1;
        string v2;
        for(auto x : word1) v1+=x;
        for(auto x : word2) v2+=x;
        if(v1.size() != v2.size()) return false;
        return v1==v2;
    }
};