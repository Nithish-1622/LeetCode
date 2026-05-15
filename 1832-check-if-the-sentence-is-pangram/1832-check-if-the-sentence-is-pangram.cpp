class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> us;
        for(char x: sentence){
            us.insert(x);
        }
        return us.size()==26;
    }
};