class Solution {
public:
    int dp[3000][10];
    
    int solve(vector<int> &arr, int sum, int index){
        if(sum==0)  
            return 0;
        
        if(index<0 || sum<0 )  
            return INT_MAX-1;
        
        if(dp[sum][index]!=-1)   
            return dp[sum][index];
        
        
        return dp[sum][index]=min(1+solve(arr, sum-arr[index],index), solve(arr, sum, index-1));
    }
    int convertTime(string current, string correct)
    {
        int h1=stoi(current.substr(0,2));
        int m1=stoi(current.substr(3,2));
        
        int h2=stoi(correct.substr(0,2));
        int m2=stoi(correct.substr(3,2));
        
        int diff=(m2-m1);
        
        diff+=(h2-h1)*60;
        
        memset(dp,-1,sizeof(dp));
        vector<int> arr({1,5,15,60});
        int ans=solve(arr,diff,3);
        
        return ans;
        
    }
};