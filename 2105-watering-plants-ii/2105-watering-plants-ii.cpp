class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int l = 0;        
        int r = plants.size() - 1;
        int refillA = capacityA;
        int refillB = capacityB;
        int refill = 0;
        while (l < r) {
            if (plants[l] <= capacityA) {
                capacityA -= plants[l];
            } else {
                refill++;
                capacityA = refillA - plants[l];
            }
            l++;
            if (plants[r] <= capacityB) {
                capacityB -= plants[r];
            } else {
                refill++;
                capacityB = refillB - plants[r];
            }
            r--;
        }
        if (l == r) {
            int maxWater = max(capacityA, capacityB);
            if (maxWater < plants[l]) {
                refill++;
            }
        }
        return refill;              
    }
};