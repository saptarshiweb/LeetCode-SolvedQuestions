class Solution {
public:
    string reverseWords(string s)
    {
        
        string ans="";
        s+=" ";
        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
                continue;
            else
            {
                string wr="";
                while(s[i]!=' '&&i<n)
                {
                    wr+=s[i];i++;
                }
                if(ans.size()>0)
                    ans=wr+" "+ans;
                else
                    ans=wr;
                i--;
            }
            
        }
        return ans;
        
    }
};