class Solution {
public:
    int minBitFlips(int start, int goal) {
        int a = start^goal;
        int c = 0;
        for(int i=0;i<32;i++){
            c += (a&1);
            a = a>>1;
        }
        return c;
    }
};