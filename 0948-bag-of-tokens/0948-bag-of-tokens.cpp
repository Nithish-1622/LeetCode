class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int n = tokens.size();
        int score = 0;
        int max_score = 0;
        int l = 0;
        int r = n - 1;
        
        while(l <= r) {
            if (power >= tokens[l]) {
                power -= tokens[l];
                score += 1;
                l += 1;
                max_score = max(max_score, score);
            } else if (score > 0) {
                power += tokens[r];
                score -= 1;
                r -= 1;
            } else {
                break;
            }
        }
        
        return max_score;
    }
};