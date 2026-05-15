class Solution {
public:
    int countDigits(int num) {
        int sum  = 0;
        int ans = 1;
        int org = num;
        int c = 0;
        while(num){
            int digit = num%10;
            if(org%digit==0) c++;
            num /=10; 
        }
        return c;
    }
};