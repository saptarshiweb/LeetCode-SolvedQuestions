class Solution {
public:
    int dp[100005];
    int mod=1e9+7;
    int solve(string &s,int i,int n)
    {
        if(i==n)
            return 1;
        if(dp[i]!=-1)
            return dp[i];
        int high=(s[i]=='7'||s[i]=='9')?4:3;
        long long int cur=i,ans=0,frq=1;
        
        while(frq<=high&&s[cur]==s[i])
        {
            cur++;frq++;
            ans+=solve(s,cur,n)%mod;
        }
        return(dp[i]=ans%mod);
    }
    
    int countTexts(string s)
    {
        memset(dp,-1,sizeof(dp));
        return solve(s,0,s.size());
        
    }
};