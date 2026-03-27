class Solution {
public:
    int catalan(int n,int r) {
       
        long res = 1;
        for(int i = 0; i < r; i++) {
            res *= (n - i);
            res /= (i + 1);
        }
        return res;
    }
    int numTrees(int n) {
        // catalan number = (2nCn) / (n+1)
        return catalan(2 * n,n) / (n + 1);
    }
};