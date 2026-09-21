class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int c = 0;
        sort(people.begin(),people.end());
        int l = 0;
        int r = people.size()-1;
        while(l<=r){
            int sum = people[l]+people[r];
            if(sum<=limit){
                c++;
                l++;
                r--;
            }else{
                c++;
                r--;
            }
        }
        return c;
    }
};