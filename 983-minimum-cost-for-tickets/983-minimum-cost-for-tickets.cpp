class Solution {
public:
    int dp[500];
    int n;
    
    int solve(vector<int>& days,vector<int>& costs,int idx)
    {
     if(idx>=days.size())
         return 0;
        if(dp[days[idx]]!=-1)
            return dp[days[idx]];
        
        int i;
        int day_1=costs[0]+solve(days,costs,idx+1);
        
        for(i=idx;i<n&&days[i]<days[idx]+7;i++)
        {}
        
        int day_7=costs[1]+solve(days,costs,i);
        
        for(i=idx;i<n&&days[i]<days[idx]+30;i++)
        {}
        
        int day_30=costs[2]+solve(days,costs,i);
        
        dp[days[idx]]=min({day_1,day_7,day_30});
        
        return dp[days[idx]];
    }
    
    
    int mincostTickets(vector<int>& days, vector<int>& costs)
    {
        memset(dp,-1,sizeof(dp));
        n=days.size();
        return(solve(days,costs,0));
    }
};