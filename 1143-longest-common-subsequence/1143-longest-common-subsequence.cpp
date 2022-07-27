class Solution {
public:
    int dp[1005][1005];
    int solve(string& s1,string& s2,int ind1,int ind2)
    {
        if(ind1<0||ind2<0) return 0;
        
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        
        if(s1[ind1]==s2[ind2]) return dp[ind1][ind2]=(1+solve(s1,s2,ind1-1,ind2-1));
        
        return dp[ind1][ind2]=max(solve(s1,s2,ind1-1,ind2),solve(s1,s2,ind1,ind2-1));
    }
    int longestCommonSubsequence(string s1, string s2)
    {
        memset(dp,-1,sizeof(dp));
        return solve(s1,s2,s1.size()-1,s2.size()-1);
    }
};