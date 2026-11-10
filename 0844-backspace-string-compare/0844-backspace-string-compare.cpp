class Solution {
public:
    string build(string s){
        stack<int> st1;
        for (char ch : s){
            if(ch=='#'){
                if(!st1.empty())
                    st1.pop();
            }else{
            st1.push(ch);
            }
         }
        string ans1 = "";
        while(!st1.empty()){
            ans1+=st1.top();
            st1.pop();
        }
        return ans1;
    }
    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }
};