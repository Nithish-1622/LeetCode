class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = *max_element(piles.begin(),piles.end());
        while(low<=high){
            long long mid = (low+high)/2;
            long long t = totalhrs(piles,mid);
            if (t<=h){
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }

    long long totalhrs(vector<int>& piles, int mid){
        long long t = 0;
        for (int x : piles){
            t+=ceil((double)x/mid);
        }
        return t;
    }
    
};