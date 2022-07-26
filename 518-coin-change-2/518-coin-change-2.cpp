class Solution {
public:
    int dp[400][6000];
    int solve(int ind,vector<int>& coins,int amount)
    {
        if(ind<0||amount<0)
            return 0;
        if(amount==0)
            return 1;
        if(dp[ind][amount]!=-1)
            return dp[ind][amount];
        int notTake=0,take=0;
        notTake=solve(ind-1,coins,amount);
        if(coins[ind]<=amount)
            take=solve(ind,coins,amount-coins[ind]);
        
        return dp[ind][amount]=take+notTake;
    }
    
    int change(int amount, vector<int>& coins)
    {
        memset(dp,-1,sizeof(dp));
        return solve(coins.size()-1,coins,amount);
        
    }
};