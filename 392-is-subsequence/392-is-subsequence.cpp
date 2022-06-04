class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n=t.size();
        
        int ans=s.size();int j=0;
        for(int i=0;i<n;i++)
        {
            if(ans==0)
                return true;
            if(t[i]==s[j])
            {
                j++;ans--;
            }
            
        }
        if(ans==0)
            return true;
        else
            return false;
    }
};