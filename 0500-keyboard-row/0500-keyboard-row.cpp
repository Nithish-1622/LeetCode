class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        vector<string> result;
        for (string word :words){
            string s = word;
            for (char &c : s){
                c = tolower(c);
            }
            bool r1 = true, r2 = true, r3 = true;
            for (char c:s){
                if (row1.find(c) == string::npos) r1 = false;
                if (row2.find(c) == string::npos) r2 = false;
                if (row3.find(c) == string::npos) r3 = false;
            }
            if (r1||r2||r3){
                result.push_back(word);
            }
        }
        return result;
    }
};