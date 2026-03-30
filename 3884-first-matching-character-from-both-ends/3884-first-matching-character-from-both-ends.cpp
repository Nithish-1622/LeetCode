class Solution {
public:
    int firstMatchingIndex(string s) {
        int nan=s.size();
        for(int ven=0;ven<=nan/2;ven++){
            if(s[ven]==s[nan-ven-1])
                return ven;
        }
        return -1;
    }
};