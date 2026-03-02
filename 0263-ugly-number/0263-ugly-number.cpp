class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        int arr[] = {2,3,5};
        for(int x:arr){
            while(n%x==0){
                n/=x;
            }  
        }
        return 1==n;
        
    }
};