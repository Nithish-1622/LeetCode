class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> boo(n,0);
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<n;j++){
                if(nums1[i]==nums2[j] && !boo[j]){
                    ans.push_back(nums1[i]);
                    boo[j] = 1;
                    break;
                }
            }
        }
        return ans;
        
    }
};