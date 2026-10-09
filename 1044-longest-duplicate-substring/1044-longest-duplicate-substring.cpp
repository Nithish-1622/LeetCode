class Solution {
int search(int len, const std::string& s) {
        int n = s.length();
        if (len == 0) return -1;

        unsigned long long base = 31;
        unsigned long long currentHash = 0;
        unsigned long long powBase = 1;

        // Compute base^(len - 1)
        for (int i = 0; i < len - 1; ++i) {
            powBase *= base;
        }

        // Compute hash of the initial window
        for (int i = 0; i < len; ++i) {
            currentHash = currentHash * base + (s[i] - 'a' + 1);
        }

        // Hash map mapping hash value to starting index to verify collisions
        std::unordered_map<unsigned long long, std::vector<int>> seen;
        seen[currentHash].push_back(0);

        // Slide the window across the string
        for (int i = len; i < n; ++i) {
        
            currentHash = (currentHash - (s[i - len] - 'a' + 1) * powBase) * base + (s[i] - 'a' + 1);
            int startIdx = i - len + 1;

            if (seen.count(currentHash)) {
                std::string currSub = s.substr(startIdx, len);
                for (int prevIdx : seen[currentHash]) {
                   
                    if (s.compare(prevIdx, len, currSub) == 0) {
                        return startIdx;
                    }
                }
            }
            seen[currentHash].push_back(startIdx);
        }

        return -1;
    }
public:
    string longestDupSubstring(string s) {
        int left = 1, right = s.length() - 1;
        int bestStart = -1;
        int bestLen = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int startIdx = search(mid, s);

            if (startIdx != -1) {
                bestStart = startIdx;
                bestLen = mid;
                left = mid + 1; 
            } else {
                right = mid - 1; 
            }
        }

        return bestStart == -1 ? "" : s.substr(bestStart, bestLen);
    }
};