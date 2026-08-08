class Solution {
public:
    int div_mul(int n){
        int m = 1;
        while(n){
            int a = n%10;
            m = m * a;
            n/=10;
        }
        return m;
    }
    int smallestNumber(int n, int t) {
        while(div_mul(n)%t != 0){
            n++;
        }
        return n;
        
    }
};