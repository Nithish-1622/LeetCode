class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (string x: words){
            string rev = x;
            reverse(x.begin(),x.end());
            if (x == rev) return x;
        }
        return "";
    }
};