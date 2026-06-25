class Solution {
public:
    int calPoints(vector<string>& o) {
        int n = o.size();
        stack<int> st;
        int score = 0;
        for(string x : o){
            if (x=="D"){
                st.push(2*st.top());
            }else if (x=="C"){
                st.pop();
            } else if(x=="+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b); 
            } else{
                st.push(stoi(x));
            }
        }
        if (st.empty())
            return 0;
        while (!st.empty()) {
            score += st.top();
            st.pop();
        }
        return score;
    }
};