class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        int c = 0;
        map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        vector<int> uniq;
        for(auto &p:freq){
            uniq.push_back(p.first);
        }
        sort(uniq.begin(),uniq.end());
        for(int i=0;i<uniq.size();i++){
            for(int j=i+1;j<uniq.size();j++){
                int x = uniq[i];
                int y = uniq[j];
                if(freq[x]!=freq[y]){
                    return {x,y};
                }
            }
        }

    return {-1,-1};
    }
};