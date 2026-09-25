class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        /*
            1 4 7            7 4 1
            2 5 8      ->    8 5 2 
            3 6 9            9 6 3  
            (Transpose)      (Reverse the row)

        */
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }        
    }
};