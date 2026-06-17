class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int c = 0;
        for(int i=0;i<arr.size();i++){
            if(c==3) break;
            if(arr[i]%2!=0){
                c++;
            }else{
                c=0;
            }
        }
        return (c==3);
       
    }
};