class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> st1;
        stack<int> st2;
        for (char ch : s){
            if(ch=='#'){
                if(!st1.empty())
                    st1.pop();
            }else{
            st1.push(ch);
            }
        }
        for (char ch : t){
            if( ch=='#'){
                if(!st2.empty())
                    st2.pop();
            }else{
            st2.push(ch);
            }
        }
        string ans1 = "";
        string ans2 = "";
        while(!st1.empty()){
            ans1+=st1.top();
            st1.pop();
        }
        while(!st2.empty()){
            ans2+=st2.top();
            st2.pop();
        }
        return ans1 == ans2;
    }
};