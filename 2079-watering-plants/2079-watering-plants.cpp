class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int l = 0;
        int r = 0;
        long long steps = 0;
        int refill = capacity;
        for(int i=0;i<plants.size();i++){
            if(plants[i]<=capacity){
                steps+=1;
                capacity -= plants[i];
                plants[i] = 0;
            }
            else if(plants[i]>capacity){
                steps+=i;
                capacity = refill;
                i = -1;
            }
        }
        return steps;
    }
};