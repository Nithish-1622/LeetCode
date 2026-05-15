class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        for(string i: sentences){
            int sp = 0;
            for(char ch: i){
            if(ch == ' ') sp++;
            maxi = max(maxi,sp);
            }
        }
        return maxi+1;
        
    }
};