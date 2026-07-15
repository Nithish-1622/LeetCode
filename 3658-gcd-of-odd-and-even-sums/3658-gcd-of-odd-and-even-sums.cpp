class Solution {
public:
    int compute_gcd(int a, int b){
        if(b==0) return a;      
        return compute_gcd(b,a%b);
    }  
    int gcdOfOddEvenSums(int n) {
        int odd=0;
        int even=0;
        for(int i=1;i<=2*n;i++){
            if(i%2==0) even+=i;
            else  odd+=i;
        }
        return compute_gcd(even,odd);
    }
};