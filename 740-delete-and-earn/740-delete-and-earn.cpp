class Solution {
public:
    int dp[15000];
    int solve(map<int,int>& mp, int num, int maxNum){
        
        if(num>maxNum) return 0;
        
        if(dp[num]!=-1) return dp[num];
        
        int take=(mp[num]*num)+solve(mp,num+2,maxNum);
        int notTake=solve(mp,num+1,maxNum);
        
        return dp[num]=max(take,notTake);
        
    }
    
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
            
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        
        sort(nums.begin(),nums.end());
        int maxNum=nums[n-1];
        memset(dp,-1,sizeof(dp));
        return solve(mp,nums[0],maxNum);
    }
};