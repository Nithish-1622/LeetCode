class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        int id = 0, d = 1;
        vector<vector<char>> r(numRows);

        for (char c : s) {
            r[id].push_back(c);
            if (id == 0) {
                d = 1;
            } else if (id == numRows - 1) {
                d = -1;
            }
            id += d;
        }

        string result;
        for (const auto& row : r) {
            for (char c : row) {
                result += c;
            }
        }

        return result;      
    }
};