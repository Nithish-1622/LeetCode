class Solution {
public:
    int pivotInteger(int n) {
        int t = n*(n+1)/2;
        int pivot = sqrt(t);
        if(pivot*pivot == t) return pivot;
        return -1;
    }
};