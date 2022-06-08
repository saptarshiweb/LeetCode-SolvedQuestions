class Solution {
public:
    int dp[105];
    
    int solve(string &s,int i,int n)
    {
        if(s[i]=='0'&&i<n)
            return 0;
        if(i>=n)
            return 1;
        
        if(dp[i]!=-1)
            return dp[i];
        int ways=0;
        //single take
        
        if(s[i]!='0')
            ways=solve(s,i+1,n);
        //double take
        
        if((i+1<n)&&((s[i]=='1'&&s[i+1]<='9')||(s[i]=='2'&&s[i+1]<='6')))
            ways+=solve(s,i+2,n);
        
        dp[i]=ways;
        
        return ways;
            
            
    }
    int numDecodings(string s)
    {
        memset(dp,-1,sizeof(dp));
        return(solve(s,0,s.size()));
    }
};