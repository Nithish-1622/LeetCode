class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==0){
            return {};
        }
        if(numRows==1){
            return {{1}};
        }
        vector<vector<int>> pR = generate(numRows-1);
        vector<int> nR(numRows,1);
        for(int i=1;i<numRows-1;i++){
            nR[i] = pR.back()[i-1]+pR.back()[i];
        }
        pR.push_back(nR);
        return pR;
    }
};