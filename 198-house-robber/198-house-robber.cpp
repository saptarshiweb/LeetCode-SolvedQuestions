class Solution {
public:
    int dp[500];
    int solve(vector<int> &nums,int ind)
    {
        if(ind<0)
            return 0;
        if(ind==0)
            return nums[0];
        
        if(dp[ind]!=-1)
            return dp[ind];
        
        int notTake=0+solve(nums,ind-1);
        int take=nums[ind]+solve(nums,ind-2);
        return dp[ind]=max(take,notTake);
    }
    
    int rob(vector<int>& nums)
    {
        memset(dp,-1,sizeof(dp));
        int k= solve(nums,nums.size()-1);
        int ans=INT_MIN;
        for(int i=0;i<500;i++)
            ans=max(ans,dp[i]);
        
        ans=max(ans,nums[0]);
        ans=max(ans,0);
        
        return ans;
    }
};