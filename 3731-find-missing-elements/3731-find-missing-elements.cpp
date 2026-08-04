class Solution {
public:
    vector<int> findMissingElements(vector<int>& n) {
        int mini = *min_element(n.begin(),n.end());
        int maxi = *max_element(n.begin(),n.end());
        vector <int> ans;
        for(int i=mini;i<maxi;i++){
            if(find(n.begin(),n.end(),i) == n.end()){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};