class Solution {
public:
    long long mp(long long x, long long y,long long mod){
        long long ans = 1;
        while(y>0){
            if(y%2==1)
                ans = ans*x%mod;
            x = x*x%mod;
            y/=2;
        }
        return ans;
    }
    long long sumDecoded(vector<long long>& nums) {
        const long long MOD = 1000000007;
        long long ans = 0;
        for(long long num: nums){
            int w = num%10;
            long long d = num/10;
            string s = to_string(d);
            long long x = stoi(s.substr(0,w));
            long long y = stoi(s.substr(w));
            ans = ( ans + mp(x,y,MOD))%MOD; 
        }
        return ans;
    }
};