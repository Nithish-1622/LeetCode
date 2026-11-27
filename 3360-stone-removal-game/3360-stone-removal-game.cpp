class Solution {
public:
    bool canAliceWin(int n) {
        int req = 10;
        int turn = 0;
        while( n >= req ){
            n -= req;
            req--;
            turn = 1 - turn;
        }
        return turn == 1;
    }

};