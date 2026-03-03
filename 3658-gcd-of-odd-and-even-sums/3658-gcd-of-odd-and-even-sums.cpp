class Solution {
public:
    int compute_gcd(int a, int b){
        if(b==0) return a;      
        return compute_gcd(b,a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int o=0;
        int e=0;
        for(int i=1;i<=2*n;i++){
            if(i%2==0) e+=i;
            else  o+=i;
        }
        return compute_gcd(e,o);
    }
};