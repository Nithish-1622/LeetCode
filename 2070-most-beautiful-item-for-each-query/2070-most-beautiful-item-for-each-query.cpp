class Solution {
    int binarySearch(vector<vector<int>>& items, int price){
        int l = 0, h = items.size() - 1;
        int ans = 0;

        while(l <= h){
            int mid = l + (h - l) / 2;
            if(items[mid][0] <= price){
                ans = items[mid][1];
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        return ans;
    }

public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(), items.end());

        for(int i = 1; i < items.size(); i++){
            items[i][1] = max(items[i-1][1], items[i][1]);
        }

        vector<int> res;
        for(int q : queries){
            res.push_back(binarySearch(items, q));
        }

        return res;
    }
};