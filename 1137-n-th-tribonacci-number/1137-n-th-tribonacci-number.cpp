class Solution {
public:
    int dp[50];
    
    int trib(int n)
    {
        if(n==0)
            return 0;
        else if(n==1||n==2)
            return 1;
        
        if(dp[n]!=-1)
            return dp[n];
        
        dp[n]=trib(n-1)+trib(n-2)+trib(n-3);
        return dp[n];
    }
    int tribonacci(int n)
    {
     memset(dp,-1,sizeof(dp));
        dp[0]=0,dp[1]=1,dp[2]=1;
        return trib(n);
    }
};