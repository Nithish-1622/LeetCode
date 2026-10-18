#include <vector>
class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        if(n<2) return {};
        vector<bool> is_prime(n+1,true);
        is_prime[0]=is_prime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(is_prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    is_prime[j]=false;
                }
            }
        }
            vector<int> ans;
            for(int i=2;i<=n;i++){
                if(is_prime[i]){
                    ans.push_back(i);
                }
            }
            vector<int> selected;
            long long current_sum=0;
            for(int p:ans){
                if(current_sum+p<=s){
                    selected.push_back(p);
                    current_sum+=p;
                }else{
                    break;
                }
            }
            return selected;
    }
};