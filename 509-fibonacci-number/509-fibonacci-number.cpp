class Solution {
public:
    
    int dp[40];
    int solve(int n)
    {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        dp[n]=solve(n-1)+solve(n-2);
        return dp[n];
        
    }
    int fib(int n)
    {
        memset(dp,-1,sizeof(dp));
        dp[0]=0;dp[1]=1;
        return solve(n);
    }
};