class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        stringstream ss(path);
        string dir;
        while(getline(ss,dir,'/')){
            if(dir.empty() || dir == ".") {
                continue;
            }
            if(dir==".."){
                if(!st.empty()) st.pop();
            }else{
                st.push(dir);
            }
        }
        vector<string> parts;
        while(!st.empty()){
            parts.push_back(st.top());
            st.pop();
        }
        reverse(parts.begin(), parts.end());
        
        string atr;
        for( auto x : parts){
            atr += "/"+x;
        }
        return atr.empty() ? "/" :atr;
    }
};