class Solution {
public:
    int countKeyChanges(string s) {
        int c=0;
    
    for(int i=0;s[i+1]!='\0';i++)
    {
        if(abs(s[i]-s[i+1])!=32 && s[i]!=s[i+1])
        {
            c++;
        }
    }

    return c;
    }
};