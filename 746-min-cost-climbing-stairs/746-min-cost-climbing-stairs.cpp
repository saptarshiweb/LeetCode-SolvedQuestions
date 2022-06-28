class Solution {
public:
    int dp[1005];
    int solve(vector<int>& cost,int i)
    {
        if(i>=cost.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int one=cost[i]+solve(cost,i+1);
        int two=cost[i]+solve(cost,i+2);
        
        return dp[i]=min(one,two);
    }
    
    int minCostClimbingStairs(vector<int>& cost)
    {
        memset(dp,-1,sizeof(dp));
        int one=solve(cost,0);
        memset(dp,-1,sizeof(dp));
        int two=solve(cost,1);
        return min(one,two);
        
    }
};