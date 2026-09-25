class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int row = 0;
        int one = 0;
        for(int i=0;i<m;i++){
            int t = 0; 
            for(int j=0; j<n; j++){
                if(mat[i][j] == 1) t++;
            }
            if(t>one){
                row = i;
                one  = t;
            }
        }
        return {row,one}; 
    }
};