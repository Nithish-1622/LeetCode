class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.length();
        while(num.back() == '0'){
            num.pop_back();
        }
        return num;
    }
};