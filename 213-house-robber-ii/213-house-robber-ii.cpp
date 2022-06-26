class Solution {
public:
    int dp[500];
    int solve(vector<int> &nums,int ind,int beg)
    {
        if(ind<beg)
            return 0;
        if(ind==beg)
            return nums[beg];
        
        if(dp[ind]!=-1)
            return dp[ind];
        
        int notTake=0+solve(nums,ind-1,beg);
        int take=nums[ind]+solve(nums,ind-2,beg);
        return dp[ind]=max(take,notTake);
    }
    
    int rob(vector<int>& nums)
    {
        memset(dp,-1,sizeof(dp));
        int ans1=solve(nums,nums.size()-1,1);
        memset(dp,-1,sizeof(dp));
        int ans2=solve(nums,nums.size()-2,0);
        return max({0,nums[0],ans1,ans2});
        
    }
};