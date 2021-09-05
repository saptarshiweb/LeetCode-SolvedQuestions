class Solution {
public:
    
    bool nice(string s)
    {
        map<int,int> m;
        
        for(int i=0;i<s.length();i++)
        {
            int j=s[i];
            
            m[j]++;
        }
        
        for(int i=0;i<s.length();i++)
        {
            int j=s[i];
            
            if(j<=90)
            {
                if(m[j+32]==0)
                    return false;
                
            }
            else
            {
                if(m[j-32]==0)
                    return false;
                
            }
        }
        return true;
        
    }
    
    string longestNiceSubstring(string s)
    {
        
        int maxlen=0;
        string final="";
        
        for(int i=0;i<s.length();i++)
        {
            string h="";
            h=h+s[i];
            for(int j=i+1;j<s.length();j++)
            {
                h=h+s[j];
                
                if(nice(h)==true)
                {
                    if(h.length()>maxlen)
                    {
                        maxlen=h.length();
                        final=h;
                    }
                }
                
            }
        }
        
        return final;
        
        
        
        
    }
};