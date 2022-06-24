class Solution {
    int dp[10001][13];
public:
    int coinChange(vector<int>& arr, int sum) {
        
        memset(dp,-1, sizeof dp);
        int n=arr.size()-1;
        int ans=function(arr, sum, n);
        if(ans==INT_MAX || ans==INT_MAX-1)
            return -1;
        return ans;
    }
    
    int function(vector<int> &arr, int sum, int index){
        
        
        if(sum==0)  
            return 0;
        
        if(index<0 || sum<0 )  
            return INT_MAX-1;
        
        if(dp[sum][index]!=-1)   
            return dp[sum][index];
        
        
        return dp[sum][index]=min(1+function(arr, sum-arr[index],index), function(arr, sum, index-1));
    }
    
    
};